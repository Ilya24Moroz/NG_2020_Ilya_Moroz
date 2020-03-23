#include <iostream>

using namespace std;

int main()
{
    char str[50];
    int index = 0, counterWords = 0, word = 0;
    cout << "Enter your string: ";
    cin.getline(str, 100);

    while(str[index] != 0){
        if((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z')){
            counterWords++;
        }
        if(!((str[index] >= 'a' && str[index] <= 'z') ||
            (str[index] >= 'A' && str[index] <= 'Z')) &&
            counterWords > 0)
        {
            word++;
            counterWords = 0;
        }
        index++;
    }
    word++;
    cout << "Words in your string: " << word << endl;
}
