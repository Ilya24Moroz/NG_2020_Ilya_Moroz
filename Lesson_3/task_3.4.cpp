#include <iostream>

using namespace std;

int main()
{
    int maxValue = 0;
    int stars[5];

    for(int counter_input = 0; counter_input < 5; counter_input++){
        cout << "Enter number in column: ";
        cin >> stars[counter_input];
        if (stars[maxV_counter] > maxValue){
            maxValue = stars[maxV_counter];
        }
    }

    for(int counter_output = 0; counter_output < maxValue; counter_output++){
        for(int row = 0; row < 5; row++){
            if(counter_output < stars[row]){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
