/* Exercício 9: Escreva um programa que tenha uma função para calcular o fatorial
de um número inteiro informado pelo usuário. */

#include <iostream>
using namespace std;

// Declaração da função:
long long fatorial(int numero);

// Função principal:
int main()
{
  // Declaração de variáveis:
  int numero;
  int resultado;

  // Entrada do usuário:
  cout << "Insira um número inteiro: ";
  cin >> numero;

  // Chamada da função:
  resultado = fatorial(numero);

  // Exibição do resultado:
  cout << "O fatorial do número " << numero << " é " << resultado << endl;

  return 0;
}

// Funções e procedimentos:
long long fatorial(int numero)
{
  int resultado = 1;
  for (int i = 2; i <= numero; i++)
  {
    resultado *= i;
  }

  return resultado;
}