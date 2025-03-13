#include <iostream>

using namespace std;

int main()
{
  int x, y, aux;
  int *p;
  x = 10;
  y = 20;
  aux = x; // aux = 10
  p = &y;  // p = endereço de y
  x = *p;  // x = y, pois p contém o endereço de y
  y = aux;

  cout << "X: " << x << endl;
  cout << "Y: " << y << endl;
}