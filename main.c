#include <stdio.h>

int main(void) {
    float numero1,numero2,media;
    printf("inserisci un numero : \n");
    scanf("%f",&numero1);
   printf("inserisci un'altro numero : \n");
    scanf("%f",&numero2);
    media = (numero1+numero2)/2;
    printf("la media e' : %f",media);
}