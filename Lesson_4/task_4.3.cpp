#include <iostream>

using namespace std;

int main()
{
    char str[40], index = 0;
    cout << "Enter your string: ";
    cin.getline(str,100);
    while(str[index] != NULL){
        if(str[index] >= 'a' && str[index] <= 'z'){
            cout << char(str[index] - 32);
        }else{
            cout << str[index];
        }
        index++;
    }
    cout << endl;
}
