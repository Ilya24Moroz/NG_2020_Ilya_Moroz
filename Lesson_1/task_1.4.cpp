#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 1 number:";
    cin >> a;
    cout << "Enter 2 number:";
    cin >> b;
    cout << "Enter 3 number:";
    cin >> c;
    switch
    {
        case 1:
            cout << a + b;
            break;
        case 2:
            cout << a - b;
            break;
        case 3:
            cout << a * b;
            break;
        case 4:
            cout << a / b;
            break;
    }
}
