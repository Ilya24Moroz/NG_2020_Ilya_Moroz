#include <iostream>

using namespace std;

int main()
{
    int num;
    int maxV = 0;
    int stars[5];

    for(int i = 0; i < 5; i++){
        cout << "Enter number in column: ";
        cin >> stars[i];
    }

    for (int i = 0; i < 5; i++){
        if (stars[i] > maxV){
            maxV = stars[i];
        }
    }

    for(int j = 0; j < maxV; j++){
        for(int b = 0; b < 5; b++){
            if(j < stars[b]){
                cout << "*";
            }else{
                cout << " ";
            }
    }
    cout << endl;
    }
}
