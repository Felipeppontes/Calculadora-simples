//▶CALCULADORA BÁSICA COM USO DO SWITCH CASE:

#include <stdio.h>
int main(){
  float N1, N2;
  char op;
  printf("-----Essa é a calculadora básica:----- \n\n");
  printf("Por favor digite o primeiro nº real:\n  ");
  scanf("%f", &N1); //recebe 1º número 
  printf("Agora digite a operação a ser feita:\n  ");
  scanf(" %c", &op);//recebe a operação
  printf("Por favor digite o segundo nº real:\n  ");
  scanf("%f", &N2);// recebe o 2º número
  

  switch (op){ // Caso o valor da variável op receba + / - / * / % / executa uma das instruções predefinidas
    case '+':
    printf("Soma: %.2f", N1 + N2);
    break;

    case '-':
    printf("Subtração: %.2f", N1 - N2);
    break;

    case '*':
    printf("Multiplicação: %.2f", N1 * N2);
    break;

    case '%':
    printf("Divisão: %.2f", N1 / N2);
    break;
  }
  return 0;
}