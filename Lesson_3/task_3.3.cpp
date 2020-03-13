#include <iostream>

using namespace std;

int main()
{
    int siz = 1;
    int dots [siz];
    int num;
    int maxValue = 0;

    for(int i = 0; i < siz; i++){
    cout << "Enter number: ";
    cin >> num;
    dots[i] = num;
    if(num == 0){
        break;
    }
    siz++;
    }

    for (int i=0; i < siz; i++){
        if (dots[i] > maxValue){
            maxValue = dots[i];
        }
    }

    for(int j = 0; j < siz; j++){
        for(int i = 0; i < maxValue - dots[j] / 2; i++){
            cout << " ";
        }
        for(int i = 0; i < dots[j]; i++){
            cout << "*";
        }
        cout << endl;
    }
}
