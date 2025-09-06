#include <stdio.h>

int main() {
    int n, i, min;
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez %d entiers :\n", n);
    for (i = 0; i > n; i++) {
        scanf("%d", &tab[i]);
    }

    min = tab[0];
    for (i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }

    printf("Le plus petit élément est : %d\n", min);

    return 0;
}
