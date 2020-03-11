#include <iostream>

using namespace std;

int main()
{
    int schools[10];
    int school;
    for(int i = 0; i < 10; i++){
    cout << "Enter school number: ";
    cin >> schools[i];
    }
    cout << "Enter your school number: ";
    cin >> school;
    for(int i = 0; i < 10; i++){
    if(schools[i] == school){
    cout << "I know this school!" << endl;
    goto skip;
    }else{
    cout << "I don't know this school" << endl;
    goto skip;
    }
    }
    skip:
    cout << "Program finished";
}
