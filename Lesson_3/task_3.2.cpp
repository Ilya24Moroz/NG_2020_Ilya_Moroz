#include <iostream>

using namespace std;

int main()
{
    int bank[10]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int cardNum, money;

    while(true){
    cout << "Enter card number: ";
    cin >> cardNum;

    cout << "How much do you want to put on the card: ";
    cin >> money;
    bank[cardNum-1] += money;
    for(int i = 0; i < 10; i++){
    cout << "card number" << i+1 << ": " << bank[i] << endl;
    }
    }
}
