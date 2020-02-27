#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter 1 number: ";
    cin >> a;
    cout << "Enter 2 number: ";
    cin >> b;
    cout << "Enter 3 number: ";
    cin >> c;
    cout << "1: +" << endl;
    cout << "2: -" << endl;
    cout << "3: *" << endl;
    cout << "4: /" << endl;
    cout << "Enter action: ";
    cin >> d;
    if(d == 1)
    {
        if(a + b == c || a + c == b || b + c == a)
        {
            cout << "Yes";
        }else
        {
            cout << "No";
        }
    }
    if(d == 2)
    {
        if( a - b == c || a - c == b || b - c == a)
        {
            cout << "Yes";
        }else
        {
            cout << "No";
        }
    }
    if(d == 3)
    {
        if( a * b == c || a * c == b || b * c == a)
        {
            cout << "Yes";
        }else
        {
            cout << "No";
        }
    }
    if(d == 4)
    {
        if(a / b == c || a / c == b || b / c == a)
        {
            cout << "Yes";
        }else
        {
            cout << "No";
        }
    }
}
