#include <stdio.h>
#include <string.h>

int main() {
    char chainePrincipale[1000];
    char sousChaine[1000];

    printf("Entrez la chaine principale : ");
    fgets(chainePrincipale, 1000, stdin);

    printf("Entrez la sous-chaine a rechercher : ");
    fgets(sousChaine, 1000, stdin);

    if (strstr(chainePrincipale, sousChaine) != NULL) {
        printf("La sous-chaine est presente dans la chaine principale.\n");
    } else {
        printf("La sous-chaine n'est pas presente dans la chaine principale.\n");
    }

    return 0;
}
