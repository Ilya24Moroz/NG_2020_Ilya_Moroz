#include <iostream>

using namespace std;

int main()
{
    int n, m, k;
    cout << "Vvedite kolichestvo shusek: ";
    cin >> n;
    cout << "Vvedite kolichestvo oreshkov:";
    cin >> m;
    cout << "Vvedite kolichestvo oreshkov na zimy:";
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
