/* Exercício 5: Escreva um programa com um procedimento que receba três notas
e uma letra como parâmetros. Se a letra for “A”, calcule e retorne a média
aritmética. Se for “P”, retorne a média ponderada considerando os pesos 2,
3 e 4 para as respectivas notas. */

#include <iostream>
using namespace std;

// Declaração das funções:
float calcular_media(float nota1, float nota2, float nota3, char letra);

// Função principal:
int main()
{
  // Declaração de variáveis:
  float nota1, nota2, nota3;
  char letra;
  bool flag = false;
  float media = 0;

  // Recebimento da primeira nota:
  cout << "Insira a primeira nota: ";
  cin >> nota1;

  // Recebimento da segunda nota:
  cout << "Insira a segunda nota: ";
  cin >> nota2;

  // Recebimento da terceira nota:
  cout << "Insira a terceira nota: ";
  cin >> nota3;
  cout << "-------------------------------" << endl;

  // Recebimento da letra:
  while (flag == false)
  {
    cout << "Qual média você deseja?" << endl;
    cout << "A: Média aritmética" << endl;
    cout << "P: Média ponderada" << endl;
    cout << "Resposta: ";
    cin >> letra;
    if (letra == 'A' || letra == 'a' || letra == 'p' || letra == 'P')
    {
      flag = true;
    }
    else
    {
      flag = false;
      cout << "Inváido, escolha entre A e P." << endl;
      cout << "-------------------------------" << endl;
    }
  }

  // Chamada da função:
  media = calcular_media(nota1, nota2, nota3, letra);

  // Exibição do resultado para o usuário:
  cout << "A média é: " << media << endl;

  return 0;
}

// Funções e procedimentos:
float calcular_media(float nota1, float nota2, float nota3, char letra)
{
  float media_escolhida = 0;
  if (letra == 'a' || letra == 'A')
  {
    media_escolhida = (nota1 + nota2 + nota3) / 3;
  }
  else if (letra == 'p' || letra == 'P')
  {
    media_escolhida = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4)) / 3;
  }

  return media_escolhida;
}