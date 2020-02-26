#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Vvedite 1 chislo: ";
    cin >> a;
    cout << "Vvedite 2 chislo: ";
    cin >> b;
    cout << "Vvedite 3 chislo: ";
    cin >> c;
    cout << "1: +" << endl;
    cout << "2: -" << endl;
    cout << "3: *" << endl;
    cout << "4: /" << endl;
    cout << "Vvedite deystvie: ";
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
