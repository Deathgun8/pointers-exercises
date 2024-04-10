#include <stdio.h>
#include <stdlib.h>

int main (void) {

    char *pont;
    int i;

    printf("Digite uma palavra\n");
    scanf("%s", pont);

    for (i = 0; pont[i] != '\0'; i++) {
        printf("%c", pont[i]);
    }

    return 0;
}