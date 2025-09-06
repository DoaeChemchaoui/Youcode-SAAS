#include <stdio.h>

int main() {
    int n;
    printf("Donne-moi un nombre d'elements de tableau: ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Les éléments du tableau sont :");
    for (int i = 0; i < n; i++) {
        printf("%d", tab[i]);
    }

    return 0;
}
