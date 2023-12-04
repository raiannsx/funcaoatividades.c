#include <stdio.h>
#include <stdlib.h>



void cabecalho(){

    printf("\n==========================\n");
    printf("\t  SENAI-BA\n");
    printf("\n==========================\n");
}
    void limparTela(){
    system("cls");
    }

    int main(){
       char nome[200];
        int idade;


    cabecalho();
    printf("digite seu nome:    ");
    gets(nome);
    limparTela;

    cabecalho();
    printf("digite sua idade:   ");
    scanf("%d", &idade); 
    limparTela();       

    system("cls || clear");

    limparTela();
    cabecalho();
    printf("Nome:   %s \n", nome);
    printf("idade:   %d \n", idade);


    return 0;
}