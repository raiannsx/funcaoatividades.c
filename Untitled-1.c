#include <stdio.h>

void encontrarMaiorEMenor(int num1, int num2, int *maior, int *menor) {
    if (num1 > num2) {
        *maior = num1;
        *menor = num2;
    } else {
        *maior = num2;
        *menor = num1;
    }
}

int main() {
    int numero1, numero2, maior, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    encontrarMaiorEMenor(numero1, numero2, &maior, &menor);

    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);

    return 0;
}