/* Exercício 8: Crie um programa que tenha uma função para calcular a idade de uma
pessoa em dias. O usuário deve informar a idade em anos, meses e dias,
e a função deve retornar o total correspondente em dias. */

#include <iostream>
using namespace std;

// Declaração de funções:
int idade_dias(int anos, int meses, int dias);

// Função principal:
int main()
{
  // Declaração de variáveis:
  int anos, meses, dias;
  int total;

  // Entrada de anos:
  cout << "Quantos anos você tem?" << endl;
  cout << "Resposta: ";
  cin >> anos;
  cout << "-----------------------------" << endl;

  // Entrada de meses:
  cout << "E meses?" << endl;
  cout << "Resposta: ";
  cin >> meses;
  cout << "-----------------------------" << endl;

  // Entrada de dias:
  cout << "E dias?" << endl;
  cout << "Resposta: ";
  cin >> dias;
  cout << "-----------------------------" << endl;

  // Chamada da função
  total = idade_dias(anos, meses, dias);

  // Exobição do resultado:
  cout << "Você possui " << total << " dias de idade." << endl;

  return 0;
}

// Funções e procedimentos:
int idade_dias(int anos, int meses, int dias)
{
  int total_dias;

  // Cálculo:
  total_dias = (anos * 365) + (meses * 30) + dias;

  return total_dias;
}