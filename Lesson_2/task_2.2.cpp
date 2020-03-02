#include <iostream>

using namespace std;

int main()
{
    int a;
    int i = 0;
    cout << "Enter the number: ";
    cin >> a;
    while(i <= a){
        cout << i;
        if(i < a){
           cout << ",";
        }
        i++;
    }
}
