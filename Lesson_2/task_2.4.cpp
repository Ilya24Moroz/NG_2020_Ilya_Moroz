#include <iostream>

using namespace std;

int main()
{
    int pyramids_size;
    cout << "Enter the size of the pyramids: ";
    cin >> pyramids_size;
    for (int pyramid_to_bottom = 0; pyramid_to_bottom <= pyramids_size; pyramid_to_bottom++){
         for (int counter_stars_up = 0; counter_stars_up < pyramid_to_bottom; counter_stars_up++){
             cout << "*";
         }
        cout << endl;
       }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    for (int pyramid_to_top = 1; pyramid_to_top <= pyramids_size; pyramid_to_top++){
         for (int counter_stars_down = pyramid_to_top; counter_stars_down <= pyramids_size; counter_stars_down++){
             cout << "*";
         }
        cout << endl;
       }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    for (int counter_iteration = 1; counter_iteration <= pyramids_size; counter_iteration++){
         for (int counter_freespace = 2; counter_freespace <= counter_iteration; counter_freespace++){
            cout << " ";
         }
            for (int counter_inverse = counter_iteration; counter_inverse <= pyramids_size; counter_inverse++){
                cout << "*";
         }
        cout << endl;
       }




}

