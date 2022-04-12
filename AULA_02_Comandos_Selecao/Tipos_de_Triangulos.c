/*
   Dados três números positivos quaisquer, verifique se eles podem representar as medidas dos
   lados de um triângulo e, se puderem classifique o triângulo em equilátero, isósceles ou escaleno.
*/

#include <stdio.h>

int main(void) {
   float a, b, c;
   printf("Números? ");
   scanf("%f %f %f",&a,&b,&c);
   if( a< b + c && b < a + c && c < a + b ) {
      printf("Triangulo: ");
      if( a==b && b==c ) puts("equilátero");
      else if( a==b || a==c || b==c) puts("isósceles");
      else puts("escaleno");
   }
   else puts("Nao é triângulo!");
   return 0;
}