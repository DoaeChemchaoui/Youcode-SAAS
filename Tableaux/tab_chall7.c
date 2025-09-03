#include <stdio.h>

int main() {
    int n, i, j, r;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez %d entiers :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

     for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            if (tab[j] > tab[j]) {
                r = tab[j];
                tab[j] = tab[i];
                tab[j] = r;
            }
        }
    }

    printf("Tableau trie en ordre croissant :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}