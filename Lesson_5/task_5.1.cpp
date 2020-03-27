#include <iostream>

using namespace std;

void getArr(int arr[], int sizeArr, int num){
  for(int counter_multiply = 0; counter_multiply < sizeArr; counter_multiply++){
      arr[counter_multiply] *= num;
    }
  for(int counter_output = 0; counter_output < sizeArr; counter_output++){
      cout << "Numbers in array: " << arr[counter_output] << endl;
    }
}

int main()
{
  int sizeArr = 0, number;
  cout << "Enter array size: ";
  cin >> sizeArr;
  int numArr[sizeArr];

  for(int counter_input = 0; counter_input < sizeArr; counter_input++){
      cout << "Enter number to array: ";
      cin >> numArr[counter_input];
    }

  cout << "Enter number on which you want multiply: ";
  cin >> number;

  getArr(numArr, sizeArr, number);
}
