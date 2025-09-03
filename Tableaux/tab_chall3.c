#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    int somme = 0;
    for (int i = 0; i < n; i++) {
        somme += tab[i];
    }

    printf("La somme des elements est : %d , somme");

    return 0;
}
