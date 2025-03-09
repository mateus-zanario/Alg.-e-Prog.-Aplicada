/* Exercício 10: Faça um programa que tenha um procedimento para exibir a tabuada
de um número. A saída deve seguir o seguinte formato:
1 x N =
2 x N =
3 x N =
*/

#include <iostream>
using namespace std;

// Declaração das funções:
void tabuada(float numero);

// Função principal:
int main()
{
  // Declaração de variáveis:
  float numero;

  // Entrada do usuário:
  cout << "Insira um número: ";
  cin >> numero;
  cout << "--------------------------" << endl;

  // Chamada da função:
  tabuada(numero);

  return 0;
}

// Funções e procedimentos:
void tabuada(float numero)
{
  // Exibição da tabuada:
  cout << "A tabuada do número " << numero << " é: " << endl;
  for (int i = 1; i <= 10; i++)
  {
    cout << i << " x " << numero << " = " << (numero * i) << endl;
  }
}