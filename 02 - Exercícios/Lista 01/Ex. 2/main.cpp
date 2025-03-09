/* Exercício 2: Crie um programa que contenha uma sub-rotina para validar a
entrada de caracteres. Somente as letras “A”, “a”, “P” ou “p” são permitidas.
Caso o usuário informe um caractere diferente, a função deve retornar falso e
solicitar uma nova entrada. Informe ao usuário se o caractere foi aceito ou não. */

#include <iostream>
using namespace std;

// Declaração das funções:
bool validar(char caracteres);

// Função principal:
int main()
{
  // Declaração de variáveis:
  char entrada;
  bool flag = false;

  while (flag == false)
  {
    // Entrada do usuário:
    cout << "Informe o texto: ";
    cin >> entrada;

    // Chamada da função:
    flag = validar(entrada);

    if (flag == false)
    {
      cout << "Entrada incorreta!" << endl;
    }
    else
    {
      cout << "Entrada correta!" << endl;
    }
  }

  return 0;
}

// Funções e procedimentos:
bool validar(char caracteres)
{
  if (caracteres == 'A' || caracteres == 'a' || caracteres == 'p' || caracteres == 'P')
  {
    return true;
  }
  else
  {
    return false;
  }
}