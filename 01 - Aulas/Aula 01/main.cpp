#include <iostream>

using namespace std;

float somar(float a, float b);
float subtrair(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);
int main()
{

  float a, b, c, d, e, f;
  cout << "Informe um número inteiro: ";
  cin >> a;
  cout << "Informe um número inteiro: ";
  cin >> b;

  // Chamada da função
  c = somar(a, b);
  cout << "Soma = " << c << endl;
  d = subtrair(a, b);
  cout << "Subtração: " << d << endl;
  e = multiplicar(a, b);
  cout << "Multiplicação: " << e << endl;
  f = dividir(a, b);
  cout << "Divisão: " << f << endl;

  return 0;
}

// Funções e procedimentos
float somar(float a, float b)
{
  float x;
  x = a + b;
  return x;
}

float subtrair(float a, float b)
{
  float x;
  x = a - b;
  return x;
}

float multiplicar(float a, float b)
{
  float x;
  x = a * b;
  return x;
}

float dividir(float a, float b)
{
  float x;
  x = a / b;
  return x;
}