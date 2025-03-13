#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
  FILE *pfile;

  // Declaração de variáveis:
  char nome_arquivo[50], mensagem[50];

  // Apenas solicitar o nome do arquivo:
  cout << "Informe o nome do arquivo: ";
  cin >> nome_arquivo;

  // Utilizar apenas arquivos .txt:
  strcat(nome_arquivo, ".txt");

  // Abrir o arquivo. Caso não exista, será criado:
  pfile = fopen(nome_arquivo, "w");

  // Verificar se o arquivo foi aberto corretamente:
  if (pfile == NULL)
  {
    cout << "Erro ao abrir o arquivo!" << endl;
    return EXIT_FAILURE;
  }

  // Armazenar 3 mensagens no arquivo:
  fflush(stdin);
  for (int i = 1; i <= 3; i++)
  {
    cout << "Mensagem " << i << ": ";
    fgets(mensagem, 50, stdin);
    fprintf(pfile, "Mensagem %d: %s", i, mensagem);
  }

  // Fechar o arquivo:
  fclose(pfile);

  return 0;
}