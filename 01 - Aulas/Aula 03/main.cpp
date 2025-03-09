#include <iostream>

using namespace std;

// Declaração de procedimentos:
void troca(int a, int b);

int main()
{
  int a, b;
  
  // Receber as duas entradas:
  cout << "Informe A: ";
  cin >> a;
  cout << "Informe B: ";
  cin >> b;
  troca(a, b);
  //cout << "Valor atual de A: " << a << endl;
  //cout << "Valor atual de B: " << b << endl;
  
  return 0;
}

// Funções e procedimentos:
void troca(int a, int b)
{
  int aux;
  aux = a;
  a = b;
  b = aux;
  cout << "Troca realizada!" << endl;
  cout << "Valor atual de A: " << a << endl;
  cout << "valor atual de B: " << b << endl; 
}