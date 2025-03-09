/* Exercício 7: Implemente um programa que tenha uma função para verificar
 se um número é primo. A função deve retornar verdadeiro se o número for
 primo e falso caso contrário. */

#include <iostream>
using namespace std;

// Declaração das funções:
bool verificar(int numero);

// Função principal:
int main()
{
  // Declaração de variáveis:
  int numero;
  bool flag;

  // Entrada do usuário:
  cout << "Insira um número inteiro: ";
  cin >> numero;

  // Chamada da função:
  flag = verificar(numero);

  // Exibição do resultado:
  if (flag == true)
  {
    cout << "O número digitado é primo." << endl;
  }
  else if (flag == false)
  {
    cout << "O número digitado não é primo." << endl;
  }

  return 0;
}

// Funções e procedimentos:
bool verificar(int numero)
{
  if (numero % 2 == 0)
  {
    return false;
  }
  else
  {
    return true;
  }
}