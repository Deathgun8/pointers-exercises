#include <stdio.h>

int main (void) {

    //cria um vetor de 10 elementos para guardar os números
    int num [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, troca, copia;

    printf("Coloca 10 numeros em ordem crescente \n\n");

    //Pede ao usuário inserir 10 números para que sejam ordenados
    for ( i = 0; i < 10; i++) {
        printf("Insira o elemento %d: ", i);
        scanf("%d", &num[i]);
    }

    //Mostra os valores do vetor antes de serem ordenados
    printf("Antes da Ordenacao \n");
    for (i = 0; i < 10; i++) {
        printf("%2d ", num[i]);
    }
    
    //Ordena os valores do vetor em ordem crescente
    do {
        troca = 0;
        for (i = 0; i < 10; i++) {
            if (num[i] > num[i+1]) {
                copia = num[i];
                num[i] = num[i+1];
                num[i+1] = copia;
            } 
        } 
    } while (troca);

    //Mostra os valores do vetor depois de estarem ordenados
    printf("\n Depois da Ordenacao \n");
    for (i = 0; i < 10; i++)
    {
        printf("%2d ", num[i]);
    }
}