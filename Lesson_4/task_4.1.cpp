#include <iostream>

using namespace std;

int main()
{
    char str[50];
    int index = 0, counterWords = 0;
    cout << "Enter your string: ";
    cin.getline(str, 100);

    while(str[index] != 0){
        if(str[index] == ' '){
            counterWords++;
        }
        index++;
    }
    cout << counterWords + 1 << endl;
}
