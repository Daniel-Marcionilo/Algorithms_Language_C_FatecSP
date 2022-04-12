#include <stdio.h>
/*
  Formatação de Campos
*/

int main(void) {
    int a = 678;
    float b = 12.3416;
    printf("%5d\n",a); // 00678
    printf("%06d\n",a); // 000678
    printf("%7.3f\n",b); // 12.342
    return 0;
}