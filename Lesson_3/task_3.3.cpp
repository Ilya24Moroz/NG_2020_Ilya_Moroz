#include <iostream>

using namespace std;

int main()
{
    int arr_size = 1;
    int dots [arr_size];
    int num;
    int maxValue = 0;

    for(int counter_input = 0; counter_input < arr_size; counter_input++){
        cout << "Enter number: ";
        cin >> num;
        dots[counter_input] = num;
        if(num == 0){
            break;
        }
        arr_size++;
    }

    for (int maxV = 0; maxV < arr_size; maxV++){
        if (dots[maxV] > maxValue){
            maxValue = dots[maxV];
        }
    }

    for(int counter_output = 0; counter_output < arr_size; counter_output++){
        for(int freespace = 0; freespace < maxValue - dots[counter_output] / 2; freespace++){
            cout << " ";
        }
        for(int star = 0; star < dots[counter_output]; star++){
            cout << "*";
        }
        cout << endl;
    }
}
