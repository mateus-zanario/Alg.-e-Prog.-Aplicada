/* Exercício 6: Resolva o exercício anterior utilizando as sub-rotinas criadas nos
exercícios 1 e 2 para validar as notas e a entrada da letra. */

#include <iostream>
using namespace std;

// Declaração das funções:
bool verificar_nota(float nota);
bool verificar_letra(char letra);
float calcular_media(float nota1, float nota2, float nota3, char letra);

// Função principal:
int main()
{
  // Declaração de variáveis:
  float nota1, nota2, nota3;
  char letra;
  bool flag = false;
  float media = 0;

  // Primeira nota
  while (flag == false)
  {
    // Recebimento:
    cout << "Insira a primeira nota: ";
    cin >> nota1;

    // Chamada da função:
    flag = verificar_nota(nota1);

    // Verificação:
    if (flag == false)
    {
      cout << "Nota inválida, insira um número de 1 até 10." << endl;
    }
  }

  // Segunda nota
  flag = false;
  while (flag == false)
  {
    // Recebimento:
    cout << "Insira a segunda nota: ";
    cin >> nota2;

    // Chamada da função:
    flag = verificar_nota(nota2);

    // Verificação:
    if (flag == false)
    {
      cout << "Nota inválida, insira um número de 1 até 10." << endl;
    }
  }

  // Terceira nota
  flag = false;
  while (flag == false)
  {
    // Recebimento:
    cout << "Insira a terceira nota: ";
    cin >> nota3;

    // Chamada da função:
    flag = verificar_nota(nota3);

    // Verificação:
    if (flag == false)
    {
      cout << "Nota inválida, insira um número de 1 até 10." << endl;
    }
  }

  cout << "-------------------------------" << endl;

  // Recebimento da letra:
  flag = false;
  while (flag == false)
  {
    cout << "Qual média você deseja?" << endl;
    cout << "A: Média aritmética" << endl;
    cout << "P: Média ponderada" << endl;
    cout << "Resposta: ";
    cin >> letra;
    // Chamada da função:
    flag = verificar_letra(letra);

    if (flag == false)
    {
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
bool verificar_nota(float nota)
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

bool verificar_letra(char letra)
{
  if (letra == 'a' || letra == 'A' || letra == 'p' || letra == 'P')
  {
    return true;
  }
  else
  {
    return false;
  }
}

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