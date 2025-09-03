#include <stdio.h>

int main() {
    int n, i, max;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez %d entiers :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    max = tab[0];
    for (i = 1; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    printf("Le plus grand élément est : %d\n", max);

    return 0;
}
