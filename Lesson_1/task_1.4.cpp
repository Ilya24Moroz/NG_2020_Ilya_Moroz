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
    if(c == 1)
    {
        cout << a + b;
    }
    if(c == 2)
    {
      cout << a - b;
    }
    if(c == 3)
    {
      cout << a * b;
    }
    if(c == 4)
    {
      cout << a / b;
    }
}
