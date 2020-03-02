#include <iostream>

using namespace std;

int main()
{
    int s;
    int f = 1;
    cout << "Enter the size of the tree: ";
    cin >> s;
    int e = s;

    for(int a = 0; a < s; a++)
    {
        e--;
        for(int i = 0; i < e; i++){
            cout << " ";
        }
        for(int i = 0; i < f; i++){
            cout << "*";
        }
        f += 2;
        for(int i = s - 1; i < s; i++){
            cout << endl;
        }
    }
    s--;
    for(int i = 0; i < s; i++){
        cout << " ";
    }
    for(int i = 0; i < 1; i++){
        cout << "*";
    }
}
