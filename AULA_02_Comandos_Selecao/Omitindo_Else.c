/*
    Um posto de combustíveis dá um desconto de 5% para abastecimentos com valores superiores a R$ 100,00.
    Dados o número de litros abastecidos e o preço do litro de combustível, informe o valor total e o valor
    do desconto (apenas se houver um desconto).
*/

#include <stdio.h>

int main(void) {
   float total = 0.0, desconto = 0.0, preco = 40;
   int litros = 5;
   
   total = litros*preco;
   
   if(total > 100.00) {
      desconto = 0.05*total;
      printf("Desconto: R$ %.2f\n",desconto);
      total = total - desconto;
   }
   printf("Total: R$ %.2f\n",total);
   
   return 0;
}
