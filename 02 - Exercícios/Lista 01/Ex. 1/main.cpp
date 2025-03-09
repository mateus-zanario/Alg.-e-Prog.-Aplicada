/* Exercício 1: Escreva um programa que tenha uma sub-rotina para validar a nota de um aluno.
Se a nota informada estiver fora do intervalo de 0 a 10, a função deve retornar falso.
O programa principal deve pedir uma nova entrada até que uma nota válida seja informada.
Além disso, exiba uma mensagem para o usuário indicando se a nota foi aceita ou não. */

#include <iostream>
using namespace std;

// Declaração da função:
bool validar(float nota);

// Função principal:
int main()
{
  // Declaração das variáveis:
  float n1, n2;      // Notas fornecidas pelo usuário
  bool flag = false; // Indicar se a nota é válida

  // Recebimento da primeira nota:
  while (flag == false)
  {
    cout << "Informe a primeira nota: ";
    cin >> n1;

    // Chamada da função:
    flag = validar(n1);

    // Exibição ao usuário:
    if (flag == false)
    {
      cout << "Nota rejeitada!" << endl;
    }
    else
    {
      cout << "Nota aceita!" << endl;
    }
  }

  // Recebimento da segunda nota:
  flag = false;
  while (flag == false)
  {
    cout << "Informe a segunda nota: ";
    cin >> n2;

    // Chamada da função:
    flag = validar(n2);

    // Exibição ao usuário:
    if (flag == false)
    {
      cout << "Nota rejeitada!" << endl;
    }
    else
    {
      cout << "Nota aceita!" << endl;
    }
  }

  return 0;
}

// Funções e procedimentos:
bool validar(float nota)
{
  if (nota >= 0 && nota <= 10)
  {
    return true;
  }
  else
  {
    return false;
  }
}