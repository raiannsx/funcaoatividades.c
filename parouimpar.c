#include <stdio.h>
#include <stdlib.h>



void cabecalho(){
     printf("\n==========================\n");
    printf("\t  SENAI-BA\n");
    printf("\n==========================\n");

}
void verificarParOuImpar(int numero){

    if ( numero %2 == 0){
        printf("\n%d -> par. \n", numero); 
    } else {
        printf("\n%d -> par. \n", numero);
    }

}



int main(){
    int numero; 



    cabecalho();
    printf("digite o numero :   ");
    scanf("%d", &numero);

       if ( numero %2 == 0){
        printf("\n%d -> par. \n", numero); 
    } else {
        printf("\n%d -> impar. \n", numero);
    }
    return 0;
}