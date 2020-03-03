#include <iostream>

using namespace std;

int main()
{
    int pyramids_size;
    int stars = 1;
    cout << "Enter the size of the pyramids: ";
    cin >> pyramids_size;
    for(int pyramid_to_bottom = 0; pyramid_to_bottom < pyramids_size; pyramid_to_bottom++)
    {
        for(int counter_stars_up = 0; counter_stars_up < stars; counter_stars_up++){
            cout << "*";
        }
        cout << endl;
        stars++;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    for(int pyramid_to_top = 0; pyramid_to_top < pyramids_size; pyramid_to_top++)
    {
        for(int counter_stars_down = 1; counter_stars_down < stars; counter_stars_down++){
            cout << "*";
        }
        cout << endl;
        stars--;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    int freespace = 0;
    stars = pyramids_size;
    for(int counter_iteration = 0; counter_iteration < pyramids_size; counter_iteration++)
    {
        for(int counter_freespace = 0; counter_freespace < freespace; counter_freespace++){
            cout << " ";
        }
        freespace++;
        for(int counter_inverse = 0; counter_inverse < stars; counter_inverse++){
            cout << "*";
        }
        cout << endl;
        stars--;
    }
}
