#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Vvedite 1 chislo:";
    cin >> a;
    cout << "Vvedite 2 chislo:";
    cin >> b;
    cout << "Vvedite 3 chislo:";
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
