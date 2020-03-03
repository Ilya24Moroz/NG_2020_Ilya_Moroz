#include <iostream>

using namespace std;

int main()
{
    int square_size;
    cout << "Enter the size of the square: ";
    cin >> square_size;
    for(int counter_columns = 0; counter_columns < square_size; counter_columns++){
        for(int counter_rows = 0; counter_rows < square_size; counter_rows++){
            cout << "*";
        }
        cout << endl;
    }
}
