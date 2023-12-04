#include <stdio.h>
#include <stdlib.h>



void cabecalho(){
     printf("\n==========================\n");
    printf("\t  SENAI-BA\n");
    printf("\n==========================\n");

}
void contagemDeParImpares(int numero[]){
    int numero, i, pares=0, impares=0;
        
      for ( i = 0; i < 6; i++){

    if ( numero %2 == 0){
        pares++;    
    } else {
        if ( numero %2 == 0){
        impares++;    
    }
    printf("\n%d -> par. \n", numero); 
        printf("\n%d -> impar. \n", numero);
}



int main(){
    int numero[6];
    char contagemParesImpares; 
    int i;

    cabecalho();
    for (i = 0; i < 6; i++);{
    if ( numero[i] % 2 == 0){ 
        pares++;
    }else{
        impares++;
    }

    printf("\ncontagemDeParImpares: %d\n:   ");
    printf("\ncontagemDeParImpares: %d\n:   ");
    
    }
    

    cabecalho();
    verificarQuantidadeParOuImpar[numero]
    
      
      
      
    
      
    return 0;
}