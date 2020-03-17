#include <iostream>

using namespace std;

int main()
{
    int schools[10];
    int school;
    int counter = 0;
    for(int counter_input= 0; counter_input < 10; counter_input++){
        cout << "Enter school number: ";
        cin >> schools[counter_input];
    }
    cout << "Enter your school number: ";
    cin >> school;
    for(int counter_output = 0; counter_output < 10; counter_output++){
        if(schools[counter_output] == school){
            counter++;
        }
    }
    if(counter >= 1){
        cout << "I know this school" << endl;
    }else{
        cout << "I don't know this school" << endl;
    }
}
