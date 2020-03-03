#include <iostream>

using namespace std;

int main()
{
    int tree_size;
    int stars = 1;
    cout << "Enter the size of the tree: ";
    cin >> tree_size;
    int freespace = tree_size;

    for(int tree_iteration = 0; tree_iteration < tree_size; tree_iteration++)
    {
        freespace--;
        for(int freespace_iteration = 0; freespace_iteration < freespace; freespace_iteration++){
            cout << " ";
        }
        for(int stars_iteration = 0; stars_iteration < stars; stars_iteration++){
            cout << "*";
        }
        stars += 2;
        cout << endl;
    }

    for(int space_iteration = 0; space_iteration < tree_size - 1; space_iteration++){
        cout << " ";
    }
    cout << "*";
}
