#include <stdio.h>

int main() {
    char chaine1[200], chaine2[100];
    int i, j;

    printf("Entrez la 1er chaine : ");
    scanf("%s", chaine1);

    printf("Entrez la 2eme chaine : ");
    scanf("%s", chaine2);

    for (i = 0; chaine1[i] != '\0'; i++);
    for (j = 0; chaine2[j] != '\0'; j++) {
        chaine1[i + j] = chaine2[j];
    }
    printf("Chaine concatene : %s\n", chaine1);

    return 0;
}
