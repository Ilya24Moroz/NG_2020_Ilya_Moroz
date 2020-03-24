#include <iostream>

using namespace std;

int getArr(int arr[], int sizeArr, int num){
  for(int counter = 0; counter < sizeArr; counter++){
      arr[counter] *= num;
    }
    for(int counter_output = 0; counter_output < sizeArr; counter_output++){
        cout << arr[counter_output] << endl;
    }
}

int main()
{
  int sizeArr = 0, numArr[sizeArr], number;
  cout << "Enter array size: ";
  cin >> sizeArr;

  for(int counter_input = 0; counter_input < sizeArr; counter_input++){
      cout << "Enter number to array: ";
      cin >> numArr[counter_input];
    }
    cout << "Enter number: ";
    cin >> number;
    getArr(numArr, sizeArr, number);
}
