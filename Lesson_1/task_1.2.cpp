#include <iostream>

using namespace std;

int main()
{
    int n, m, k;
    cout << "Ónter the number of cones: ";
    cin >> n;
    cout << "Enter the number of nuts:";
    cin >> m;
    cout << "Enter the number of nuts for the winter:";
    cin >> k;
    if(m * n >= k)
    {
      cout << "Yes";
    }
    if(m * n < k)
    {
      cout << "No";
    }
}
