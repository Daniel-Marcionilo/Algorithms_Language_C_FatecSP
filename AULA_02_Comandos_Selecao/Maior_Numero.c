/*
  Dados dois números distintos, informe qual deles é o maior.
*/

#include <stdio.h>

int main(void) {
   int n1, n2;
   
   printf("Notas? ");
   scanf("%d %d",&n1,&n2);
   
   if(n1 > n2 ){
     printf("%d",n1);
   } 
   else{ 
       printf("%d",n2);
   }
   
   return 0;
}
