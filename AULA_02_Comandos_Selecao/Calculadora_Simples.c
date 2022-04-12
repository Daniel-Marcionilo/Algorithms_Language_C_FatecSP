/*
   Calculadora Simples
   Usando um comando if-else, dentro do switch-case, altere o programa anterior para
   que uma divisão por zero cause a exibição de uma mensagem de alerta para o usuário.
*/

#include <stdio.h>

int main(void) {
   float x, y;
   char o;
   printf("Expressão? ");
   scanf("%f %c %f",&x,&o,&y);
   switch( o ) {
      case '+': printf("Valor = %.2f\n",x+y); break;
      case '-': printf("Valor = %.2f\n",x-y); break;
      case '*': printf("Valor = %.2f\n",x*y); break;
      case '/': printf("Valor = %.2f\n",x/y); break;
      default : printf("Operador inválido: %c\n",o);
   }
   return 0;
}