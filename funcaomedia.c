#include <stdio.h>
#include <stdlib.h>



void cabecalho(){
     printf("\n==========================\n");
    printf("\t  SENAI-BA\n");
    printf("\n==========================\n");
}

float calcularMedia( int a, int b){
    int media;

    media = (a + b) / (float)   2;
    return media;

}

int main(){
    int primeiroNumero;
    int segundoNumero;
   float media;


    cabecalho();
    printf("digite o primeiro numero:   ");
    scanf("%d", &primeiroNumero);

    printf("digite o segundo numero:   ");
    scanf("%d", &segundoNumero);


    cabecalho();
    printf("digite o primeiro numero: %d \n", primeiroNumero);
    printf("digite o segundo numero: %d \n", segundoNumero);
    printf(("Media: %2f: \n, calcularMedia(primeiroNumero, segundoNumero"));

    return 0;
}