#include <iostream>

using namespace std;

int main()
{
    int schools[10];
    int school;
    for(int counter_input= 0; counter_input < 10; counter_input++){
        cout << "Enter school number: ";
        cin >> schools[counter_input];
    }
    cout << "Enter your school number: ";
    cin >> school;
    for(int counter_output = 0; counter_output < 10; counter_output++){
        if(schools[counter_output] == school){
            cout << "I know this school!" << endl;
            goto skip;
        }
    }
    cout << "I don't know this school" << endl;
    skip:
        cout << "Program finished";
}
