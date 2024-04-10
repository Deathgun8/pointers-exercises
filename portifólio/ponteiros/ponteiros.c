#include <stdio.h>
#include <stdlib.h>


int main (void) {

    //mostrando o valor da váriavel e seu endereço na memória com ponteiros
    int x;
    int *pont = NULL;

    printf ("Digite um vlaor ");
    scanf("%d", &x);

    //guarda o enderço de X
    pont = &x;

    //printa o valor da variável que está sendo apontada (X)
    printf ("x = %d\n", *pont);
    //printa o endereço que esta sendo apontado (X)
    printf ("&x = %d\n", pont);


    //alterando o valor da variável através de ponteiros.
    *pont = 20;

    printf ("x passa a ser : %d", *pont);
}