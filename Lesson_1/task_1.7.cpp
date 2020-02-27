#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter your salary: ";
    cin >> a;
    if(a > 999)
    {
        if(a > 999999)
        {
          cout << "You are a millionaire!" << endl;
        }
        if(a < 1000000)
        {
          cout << "Good" << endl;
        }
    }
    if(a < 1000)
    {
        cout << "Work more" << endl;
    }
    cout << "but you done";
}
