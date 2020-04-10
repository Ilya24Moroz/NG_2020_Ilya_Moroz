#include <iostream>
#include <random>
#include <ctime>

using namespace std;

char generatedLevel [100][100];
char playerLevel [100][100];
int lighterAmount = 0;
int levelSize = 0, level = 0, yourLevel = 0;
bool alive = true;
int pPosX = 0, pPosY = 0;

void generateLevel(int levelSize, int type) {
    playerLevel[0][0] = '@';
    if (type == 0) {
        for (int row=0; row<levelSize; row++) {
            for (int column=0; column<levelSize; column++) {
                playerLevel[row][column] = '#';
            }
        }
    }
    else {
        for (int row = 0; row < levelSize; row++) {
            for (int column=0; column<levelSize; column++) {
                int value = rand() % levelSize;
                switch (value) {
                case 0: generatedLevel[row][column] = 'x'; break;
                case 1: generatedLevel[row][column] = 'l'; break;
                case 2: generatedLevel[row][column] = '0'; break;
                default: generatedLevel[row][column] = '.'; break;
                }

            }
        }
    }
}
void showLevel(int levelSize, int type) {
    if (type == 0) {
        for (int row=0; row<levelSize; row++) {
            for (int column=0; column<levelSize; column++) {
                cout << playerLevel[row][column];
            }
            cout << endl;
        }
    } else {
        for (int row=0; row<levelSize; row++) {
            for (int column=0; column<levelSize; column++) {
                cout << generatedLevel[row][column];
            }
            cout << endl;
        }
    }
}
void removePlayerFromMap(int levelSize) {
    for (int row=0; row<levelSize; row++) {
        for (int column=0; column<levelSize; column++) {
            if (playerLevel[row][column] == '@') {
                playerLevel[row][column] = generatedLevel[row][column];
                return;
            }
        }
    }
}

//vision
void regeneratePlayerMap(int pPosX, int pPosY, int levelSize) {
    if(lighterAmount > 0){
        if (pPosX > 0)
            playerLevel[pPosY][pPosX-1] = generatedLevel[pPosY][pPosX-1];
        if (pPosX < levelSize-1)
                playerLevel[pPosY][pPosX+1] = generatedLevel[pPosY][pPosX+1];
        if (pPosY > 0)
                playerLevel[pPosY-1][pPosX] = generatedLevel[pPosY-1][pPosX];
        if (pPosY < levelSize-1)
                playerLevel[pPosY+1][pPosX] = generatedLevel[pPosY+1][pPosX];
        if (pPosY > 0 && pPosX > 0)
                playerLevel[pPosY-1][pPosX-1] = generatedLevel[pPosY-1][pPosX-1];
        if (pPosY < levelSize-1 && pPosX > 0)
                playerLevel[pPosY+1][pPosX-1] = generatedLevel[pPosY+1][pPosX-1];
        if (pPosY < levelSize-1 && pPosX < levelSize-1)
                playerLevel[pPosY+1][pPosX+1] = generatedLevel[pPosY+1][pPosX+1];
        if (pPosY > 0 && pPosX < levelSize-1)
                playerLevel[pPosY-1][pPosX+1] = generatedLevel[pPosY-1][pPosX+1];
    }
}
//resoure
bool detectResource (int posX, int posY) {
    switch (generatedLevel[posY][posX]) {
    case 'l':
        lighterAmount++;
        cout << "You found lighter!"<< endl;
        break;
    default:
        return false;
    }
    generatedLevel[posY][posX] = '.';
    return true;
}
void gatherResource(int pPosX, int pPosY) {
    if (detectResource(pPosX, pPosY-1)) return;
    if (detectResource(pPosX+1, pPosY-1)) return;
    if (detectResource(pPosX+1, pPosY)) return;
    if (detectResource(pPosX+1, pPosY+1)) return;
    if (detectResource(pPosX, pPosY+1)) return;
    if (detectResource(pPosX-1, pPosY+1)) return;
    if (detectResource(pPosX-1, pPosY)) return;
    if (detectResource(pPosX-1, pPosY-1)) return;
}
//end resoure
void nextLevel(){
    pPosX = 0;
    pPosY = 0;
    lighterAmount = 0;
    yourLevel++;
    if(yourLevel > 1){
        cout << "New level!"<<endl;
    }
    generateLevel(levelSize, 0);
    generateLevel(levelSize, 1);

}
void playerDie(){
    alive = false;
    cout << "You Die:((((" << endl;
}
bool processPlayerMove(int pPosX, int pPosY, int levelSize) {
    if (pPosX < 0 || pPosX >= levelSize ||
            pPosY < 0 || pPosY >= levelSize) {
        return false;
    }
    if (generatedLevel[pPosY][pPosX] == '.') {
        removePlayerFromMap(levelSize);
        playerLevel[pPosY][pPosX] = '@';
        regeneratePlayerMap(pPosX, pPosY, levelSize);
        return true;
    }
    if(generatedLevel[pPosY][pPosX] == 'x'){
        playerDie();
        return false;
    }
    if(generatedLevel[pPosY][pPosX] == '0'){
        nextLevel();
        return true;
    }
    else {
        return false;
    }
}
int playerMove(){
        while (alive) {
            showLevel(levelSize, 0);
            cout << endl;
            cout << "Level: " << yourLevel << endl;

            cout << "========================================================" << endl;
            cout << ">";

            char cmd;
            cin >> cmd;
            switch (cmd) {
            case 'w': if (processPlayerMove(pPosX, pPosY-1, levelSize)) pPosY--; break;
            case 's': if (processPlayerMove(pPosX, pPosY+1, levelSize)) pPosY++; break;
            case 'a': if (processPlayerMove(pPosX-1, pPosY, levelSize)) pPosX--; break;
            case 'd': if (processPlayerMove(pPosX+1, pPosY, levelSize)) pPosX++; break;
            case 'e': gatherResource(pPosX, pPosY); processPlayerMove(pPosX, pPosY, levelSize); break;
            }

        }

    return 0;
}

int main(){
    srand(time(0));
    cout << "Enter level size: ";
    cin >> levelSize;
    nextLevel();
    playerMove();
    return 0;
}
