#include <stdio.h>
/*
    Dadas as duas notas de prova de um aluno, informe a sua média.  
*/

int main(void) {
    float n1 = 6.50, n2 = 5, media = 0;
    
    media = (n1+n2)/2;
    
    printf("%.2f\n",media);
    
    return 0;
}