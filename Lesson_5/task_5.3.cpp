#include <iostream>
#include <cmath>

using namespace std;

int getValues(char str[]){
  int value;
  cout << "Enter " << str << " number: ";
  cin >> value;
  return value;
}

void addValues(int value1, int value2){
  int resault = 0;
  resault = value1 + value2;
  cout << "Additional: " << resault << endl;
}
void subtractValues(int value1, int value2){
  int resault = 0;
  resault = value1 - value2;
  cout << "Subtract: " << resault << endl;
}
void multiplyValues(int value1, int value2){
  int resault = 0;
  resault = value1 * value2;
  cout << "Multiply: " << resault << endl;
}
void divideValues(int value1, int value2){
  int resault = 0;
  resault = value1 / value2;
  cout << "Divide: " << resault << endl;
}
void getSquareRoot(int value1, int value2){
  cout << "First number:" << sqrt(value1) << endl;
  cout << "Second number:" << sqrt(value2) << endl;
}
void getPower(int value1, int value2){
  int deg = 0;
  cout << "Enter degree: ";
  cin >> deg;
  cout << "First number:" << pow(value1,deg) << endl;
  cout << "Second number:" << pow(value2,deg) << endl;
}
int main()
{
  int firstNumber = getValues("first");
  int secondNumber = getValues("second");
  int choice = 0;

  cout << "Select action: " << endl;
  cout << " 1 - add" << endl;
  cout << " 2 - subst" << endl;
  cout << " 3 - mul" << endl;
  cout << " 4 - div" << endl;
  cout << " 5 - square root" << endl;
  cout << " 6 - power" << endl;
  cout << ">>";

  cin >> choice;

  switch (choice) {
    case 1:
      addValues(firstNumber, secondNumber);
      break;
    case 2:
      subtractValues(firstNumber, secondNumber);
      break;
    case 3:
      multiplyValues(firstNumber, secondNumber);
      break;
    case 4:
      divideValues(firstNumber, secondNumber);
      break;
    case 5:
      getSquareRoot(firstNumber, secondNumber);
      break;
    case 6:
      getPower(firstNumber, secondNumber);
      break;
    default:
      cout << "Error";
    }
}
