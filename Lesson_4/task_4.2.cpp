#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int len = 0, word, maxlen = 0, index = 0;
    cout << "Enter your line: ";
    cin.getline(str, 100);

    while (str[index] != 0)
    {
        if (str[index] >= 'a' && str[index] <= 'z'){
            len++;
        }else {
            if (len > maxlen){
                maxlen = len;
                word = index - maxlen;
            }
            len = 0;
        }
        if(str[index + 1] == 0){
            if (len > maxlen){
                maxlen = len;
                word = index - maxlen + 1;
            }
        }
        index++;
    }
    // output
    cout << "The largest word is: ";
    for(int i = 0; i < maxlen; i++){
        cout << str[word];
        word++;
    }
}
