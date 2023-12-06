#include <stdio.h>
#include <stdlib.h>

void cabecalho() {
    printf("\n========================\n");
    printf("\tSENAI - BA");
    printf("\n========================\n");
}

void limpaTela() {
    fflush(stdin);
    system("cls || clear");
}
void mostrarDados(char nome[], int idade){
    printf("\nNome: %s \n", nome);
    printf("Idade: %d \n", idade);
   
}

int main() {
    char nome[200];
    int idade;
   
    cabecalho(); //Chamada da função.
    printf("Digite um nome: ");
    gets(nome);
    limpaTela();
   
    cabecalho(); //Chamada da função.
    printf("Digite uma idade: ");
    scanf("%d",&idade);
    limpaTela();
       
    cabecalho(); //Chamada da função.
    mostrarDados(nome, idade);
    
    return 0;
}