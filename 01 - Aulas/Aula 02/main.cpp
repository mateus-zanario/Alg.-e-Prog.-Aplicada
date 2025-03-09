#include <iostream>

using namespace std;

// Declaração de funções:
void receive_numbers(int option);

// Declaração de variáveis globais:
float n1, n2;
int main()
{
  
  // Declaração de variáveis:
  int option = -1;
  float result;
  
  while(option != 0) 
  {
    // Exibição do menu:
    cout << "Calculadora Simplificada" << endl;
    cout << "Menu:" << endl;
    cout << "0 - Sair" << endl;
    cout << "1 - Somar" << endl;
    cout << "2 - Subtrair" << endl;
    cout << "3 - Multiplicar" << endl;
    cout << "4 - Dividir" << endl;
    cout << "Escolha sua opção:" << endl;
    cin >> option;

    // Tratar as opções:
    switch(option) 
    {
      case 0:
        cout << "Obrigado por usar o sistema!" << endl;
      break;

      case 1:
        cout << "Somar:" << endl;
        receive_numbers(option);
        result = n1 + n2;
        cout << "Resultado: " << result << endl;
      break;

      case 2:
        cout << "Subtrair:" << endl;
        receive_numbers(option);
        result = n1 - n2;
        cout << "Resultado: " << result << endl;
      break;

      case 3:
        cout << "Multiplicar:" << endl;
        receive_numbers(option);
        result = n1 * n2;
        cout << "Resultado: " << result << endl;
      break;

      case 4:
        cout << "Divisão:" << endl;
        receive_numbers(option);
        result = n1 / n2;
        cout << "Reultado: " << result << endl;
      break;

      default:
        cout << "Opção inválida!" << endl;
    }
  }
  return 0; 
}

// Funções e procedimentos:
void receive_numbers(int option) {
  cout << "Informe o primeiro número: " << endl;
  cin >> n1;
  cout << "Informe o segundo número: " << endl;
  cin >> n2;

  if(option == 4) {
    while( n2 == 0){
      cout << "Informe o segundo número novamente: " << endl;
      cin >> n2;
    }
  }
}