#include <iostream>

using namespace std;

int main()
{
    int num;
    int i = 0;
    cout << "Enter the number: ";
    cin >> num;
    while(i<=num){
        cout << i;
        i++;
        cout <<",";
    }
    cout << i;


}
