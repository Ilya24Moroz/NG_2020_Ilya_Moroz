#include <iostream>

using namespace std;

int main()
{
    int num;
    int j = 0;
    cout << "Enter the number: ";
    cin >> num;


    for(int i = 0; i <= num; i++){
      cout << i;
      while (j < num){
            cout << ",";
            break;
        }
        j++;
    }
}
