#include <stdio.h>
#include <stdlib.h>



void cabecalho(){
     printf("\n==========================\n");
    printf("\t  SENAI-BA\n");
    printf("\n==========================\n");

}
void mostrarTabuada(int numero){
    int i;

    for ( i = 1; i < 10; i++){
        printf("%d x %d = %d \n", numero, i , numero * i); 
    }
}



int main(){
    int numero; 


    cabecalho();
    printf("digite o numero:   ");
    scanf("%d", &numero);

    cabecalho();
    mostrarTabuada(numero);

    return 0;
}