#include <iostream>

using namespace std;

int main()
{
    int bank[10]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int cardNum, money;

    while(true){
        cout << "Enter card number: ";
        cin >> cardNum;
        if(cardNum > 0 and cardNum <= 10){
            cout << "How much do you want to put on the card: ";
            cin >> money;
            bank[cardNum - 1] += money;
            for(int counter = 0; counter < 10; counter++){
                cout << "card number" << counter + 1 << ": " << bank[counter] << endl;
            }
        }else{
            cout << "Error: Card number not found"
        }
    }
}
