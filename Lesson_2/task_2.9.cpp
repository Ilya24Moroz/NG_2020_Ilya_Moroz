#include <iostream>

using namespace std;

int main()
{
    int tree_size;
    cout << "Enter the size of the tree: ";
    cin >> tree_size;
    for (int tree_iteration = 0; tree_iteration < tree_size; tree_iteration++){
        for (int freespace_iteration = 1; freespace_iteration < tree_size - tree_iteration; freespace_iteration++){
            cout << " ";
        }
        for (int freespace_iteration = tree_size - 2 * tree_iteration;
            freespace_iteration <= tree_size;
            freespace_iteration++){
            cout << "*";
        }
        cout << endl;
    }
    for(int space_iteration = 0; space_iteration < tree_size - 1; space_iteration++){
        cout << " ";
    }
    cout << "*";
}
