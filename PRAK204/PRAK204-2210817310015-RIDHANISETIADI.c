#include<stdio.h>
int main()
{
   float r,tb,volume,luas,keliling;
   printf("Tulis jari-jari = ");scanf("%f",&r);
   printf("Tulis Tinggi Bejana = ");scanf("%f",&tb);
   volume=22 *r*r*tb/7;
   printf("\n");
   printf("\nvolume bejana adalah %.2f",volume);
   luas=2*22*r*(r+tb)/7;
   printf("\nluas bejana adalah %.2f",luas);
   keliling=2*22*r/7;
   printf("\nkeliling bejana adalah %.2f",keliling);   
}