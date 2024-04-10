#include <stdio.h>
#include <stdlib.h>

int main() {

    int vet [5];
    int i;

    printf("Digite 5 numeros\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
    }

    //apontando para o vetor
    int *pont = vet;

    //printando o vetor com ponteiro
    printf("\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", pont[i]);
    }
}