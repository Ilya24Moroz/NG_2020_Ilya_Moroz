#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 1 salary: ";
    cin >> a;
    cout << "Enter 2 salary: ";
    cin >> b;
    cout << "Enter 3 salary: ";
    cin >> c;
    if(a > b and b > c and a > c)
    {
        cout << "The difference between the maximum and minimum wage: " << a - c;
    }
    if(a > c and c > b and a > b)
    {
        cout << "The difference between the maximum and minimum wage: " << a - b;
    }
    if(b > c and c > a and b > a)
    {
        cout << "The difference between the maximum and minimum wage: " << b - a;
    }
    if(b > a and a > c and b > c)
    {
        cout << "The difference between the maximum and minimum wage: " << b - c;
    }
    if(c > a and a > b and c > b)
    {
        cout << "The difference between the maximum and minimum wage: " << c - b;
    }
    if(c > b and b > a and c > a)
    {
        cout << "The difference between the maximum and minimum wage: " << c - a;
    }
}
