#include <stdio.h>
#include <stdlib.h>



void cabecalho(){
     printf("\n==========================\n");
    printf("\t  SENAI-BA\n");
    printf("\n==========================\n");
}

int somar( int primeiroNumero, int segundoNumero){
    int somaNumeros;

    somaNumeros = primeiroNumero + segundoNumero;
    return somaNumeros;

}

int main(){
    int primeiroNumero;
    int segundoNumero;
    int soma;


    cabecalho();
    printf("digite o primeiro numero:   ");
    scanf("%d", &primeiroNumero);

    printf("digite o segundo numero:   ");
    scanf("%d", &segundoNumero);

  soma = somar(primeiroNumero, segundoNumero);
    //soma = primeiroNumero + segundoNumero;

    cabecalho();
    printf("digite o primeiro numero: %d \n", primeiroNumero);
    printf("digite o segundo numero: %d \n", segundoNumero);
    printf("Soma: %d \n, soma");

    return 0;
}
