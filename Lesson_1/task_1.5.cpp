#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d;
    float x1, x2;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    d = pow(b, 2) - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        cout << "Radical x1: " << x1 << endl;
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Radical x2: " << x2 << endl;
    }
    if (d == 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        cout << "Radical x1: " << x1 << endl;
    }
    if (d < 0)
    {
        cout << "net korney!!!!";
    }
}
