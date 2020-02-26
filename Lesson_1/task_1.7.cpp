#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Vvedite vashy zarplaty: ";
    cin >> a;
    if(a > 999999)
    {
        cout << "Ti millioner!" << endl;
    }
    if(a < 1000000)
    {
        if(a > 999)
        {
            cout << "Horosho" << endl;
        }
    }
    if(a < 1000)
    {
        cout << "Rabotai bolshe" << endl;
    }
    cout << "no ti molodec";
}
