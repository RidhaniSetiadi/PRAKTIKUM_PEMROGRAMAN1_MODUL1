#include<stdio.h>
int main()
{
    float nilai1,nilai2,h;
    printf("Masukkan nilai pertama :");
    scanf("%f",&nilai1);
    printf("Masukkan nilai kedua : ");
    scanf("%f",&nilai2);
    h=nilai1 + nilai2;
    printf("Hasil nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"",nilai1,nilai2,h);
    printf("\n\n");
    

    float nilai3,nilai4,hasil;
    printf("Masukkan nilai pertama :");
    scanf("%f",&nilai3);
    printf("Masukkan nilai kedua : ");
    scanf("%f",&nilai4);
    hasil=nilai3 + nilai4;
    printf("Hasil nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",nilai3,nilai4,hasil);
    
}
