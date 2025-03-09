/* Exercício 4: Desenvolva um programa que contenha uma função para calcular o
volume de uma esfera. O raio da esfera deve ser passado como parâmetro, e a
função deve retornar o volume correspondente. */

// Fórmula para calcular o volume de uma esfera: V = 4/3  π r³

#include <iostream>
#include <cmath>
using namespace std;

// Declaração de funções:
float calcular_volume(float r);

// Função principal:
int main()
{
  // Declaração das variáveis:
  float raio;
  float volume = 0;

  // Entrada do usuário:
  cout << "Insira o raio da esfera: ";
  cin >> raio;

  // Chamada da função:
  volume = calcular_volume(raio);

  // Exibir o volume ao usuário:
  cout << "O volume da esfera é aproximadamente: " << volume << endl;

  return 0;
}

// Funções e procedimentos:
float calcular_volume(float r)
{
  return (4.0 / 3.0) * M_PI * pow(r, 3);
}