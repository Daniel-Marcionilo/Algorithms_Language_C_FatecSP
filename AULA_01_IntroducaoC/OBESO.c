#include <stdio.h>
#include <math.h>

/*
  Uma pessoa está obesa se seu IMC (peso dividido pela altura ao quadrado) é
  superior a 30. Dados o peso e a altura de uma pessoa, informe se ela está obesa.
*/

int main(void) {
   float peso, altura, imc;
   
   printf("Qual o peso e a altura? ");
   scanf("%f %f", &peso, &altura);
   
   imc = peso/pow(altura,2);
   
   printf("IMC = %.1f\n",imc);
   
   if(imc <= 30){
      printf("Nao esta obesa!\n");
   }
   else{ 
       printf("Esta obesa!\n");
   }
   return 0;
}