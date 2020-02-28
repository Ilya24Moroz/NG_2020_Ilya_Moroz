#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "This program checks if the value is an equation" << endl;
    cout << "Enter 1 number: ";
    cin >> a;
    cout << "Enter 2 number: ";
    cin >> b;
    cout << "Enter 3 number: ";
    cin >> c;
    if(a + b == c || a + c == b || b + c == a)
    {
        cout << "Yes";
    }else if( a - b == c || a - c == b || b - c == a)
    {
        cout << "Yes";
    }else if( a * b == c || a * c == b || b * c == a)
    {
        cout << "Yes";
    }else if(a / b == c || a / c == b || b / c == a)
    {
        cout << "Yes";
    }else
    {
        cout << "No";
    }
}
