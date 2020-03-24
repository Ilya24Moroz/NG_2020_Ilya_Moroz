#include <iostream>
#include <ctime>

using namespace std;

int getResault(int size, int cubes){
  int resault = 0;

  srand(time(NULL));

  for(int counter = 0; counter < cubes; counter++){
      resault += (rand()%size);
    }
  return resault;
}

int main()
{
  int cubes = 0, cubeSize = 0;
  cout << "Enter cubes: ";
  cin >> cubes;
  cout << "Enter cubes size: ";
  cin >> cubeSize;
  cout << "Resault: " << getResault(cubeSize, cubes) << endl;
}
