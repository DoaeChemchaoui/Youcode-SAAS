#include <stdio.h>
#include <string.h>
int main() {
    char chaine1[200], chaine2[100];
    int i, j;

    printf("Entrez la 1er chaine : ");
    scanf("%s", chaine1);

    printf("Entrez la 2eme chaine : ");
    scanf("%s", chaine2);

    if (strcmp(chaine1, chaine2) == 0) {
        printf("Les chaines sont egales.\n");
    } else {
        printf("Les chaines sont differentes.\n");
    }

    return 0;
}