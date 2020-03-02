#include <iostream>

using namespace std;

int main()
{
    int a;
    int j = 1;
    cout << "Enter the size of the pyramids: ";
    cin >> a;
    for(int i=0; i<a; i++)
    {
        for(int i = 0; i<j; i++){
            cout << "*";
        }
        cout << endl;
        j++;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    for(int i = 0; i < a; i++)
    {
        for(int i = 1; i < j; i++){
            cout << "*";
        }
        cout << endl;
        j--;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    int e = 0;
    j = a;
    for(int i = 0; i < a; i++)
    {
        for(int i = 0; i < e; i++){
            cout << " ";
        }
        e++;

        for(int i = 0; i < j; i++){
            cout << "*";
        }
        cout << endl;
        j--;
    }
}
