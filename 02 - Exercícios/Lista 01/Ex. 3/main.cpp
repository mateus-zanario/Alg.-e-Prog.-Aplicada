/* Exercício 3: Faça um programa que tenha uma sub-rotina que receba dois números
inteiros. A sub-rotina deve calcular e exibir a soma dos dois números, além da
subtração e da divisão do maior pelo menor. Certifique-se de que os números
informados não sejam iguais. */

#include <iostream>
using namespace std;

// Declaração de funções:
bool validar(int num1, int num2); // Verificar se os números são iguais
int somar(int num1, int num2);    // Somar os números
int subtrair(int num1, int num2); // Subtrair os números
int dividir(int num1, int num2);  // Dividir os números

// Função principal:
int main()
{
  // Declaração de variáveis:
  int num1, num2;
  bool flag = false;
  int soma = 0, subtracao = 0, divisao = 0;

  while (flag == false)
  {
    // Entrada do primeiro número:
    cout << "Insira o primeiro número: ";
    cin >> num1;

    // Entrada do segundo número:
    cout << "Insira o segundo número: ";
    cin >> num2;

    // Chamada da função:
    flag = validar(num1, num2);

    // Exibição de que os números são válidos:
    if (flag == false)
    {
      cout << "Os números devem ser diferentes!" << endl;
      cout << "----------------------------" << endl;
    }
    else
    {
      cout << "Os números são válidos!" << endl;
    }
  }

  cout << "----------------------------" << endl;

  // Soma dos valores:
  soma = somar(num1, num2);
  cout << "A soma dos valores é: " << soma << endl;
  cout << "----------------------------" << endl;

  // Subtração dos valores:
  subtracao = subtrair(num1, num2);
  cout << "A subtração dos valores é: " << subtracao << endl;
  cout << "----------------------------" << endl;

  // Divisão dos valores:
  divisao = dividir(num1, num2);
  cout << "A divisão dos valores é: " << divisao << endl;
  cout << "----------------------------" << endl;

  return 0;
}

// Funções e procedimentos:
bool validar(int num1, int num2)
{
  if (num1 == num2)
  {
    return false;
  }
  else
  {
    return true;
  }
}

int somar(int num1, int num2)
{
  return num1 + num2;
}

int subtrair(int num1, int num2)
{
  if (num1 > num2)
  {
    return num1 - num2;
  }
  else
  {
    return num2 - num1;
  }
}

int dividir(int num1, int num2)
{
  if (num1 > num2)
  {
    return num1 / num2;
  }
  else
  {
    return num2 / num1;
  }
}