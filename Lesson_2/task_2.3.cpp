#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter the size of the square: ";
    cin >> a;
    for(int i = 0; i < a; i++){
        for(int i = 0; i < a; i++){
            cout << "*";
        }
        cout << endl;
    }
}
