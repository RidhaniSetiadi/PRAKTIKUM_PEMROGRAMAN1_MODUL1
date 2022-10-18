#include<stdio.h>
#include <math.h>
int main()
{
    int A,B,C,K,L;
    printf("Masukkan nilai  A = ");scanf("%d",&A);
    printf("Masukkan nilai  B = ");scanf("%d",&B);
    C=sqrt((B*B)-(A*A));
    printf("\nAlas= %d cm",C);
    printf("\nTinggi = %d cm",A);
    K=(A+B+C);
    printf("\nKeliling = %d cm",K);
    L=(0.5*A*C);
    printf("\nLuas = %d cm^2",L);
}
