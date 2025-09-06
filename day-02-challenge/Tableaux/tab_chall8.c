#include <stdio.h>

int main() {
    int n;
    printf("Nombre d'elements : ");
    scanf("%d", &n);

    int tab[n], copie[n];

    printf("Entrez les elements du tableau :\n");
    for(int i=0; i<n; i++)
        scanf("%d", &tab[i]);

    for(int i=0; i<n; i++)
        copie[i] = tab[i];

    printf("Tableau original : ");
    for(int i=0; i<n; i++)
        printf("%d ", tab[i]);
    printf("\nTableau copie : ");
    for(int i=0; i<n; i++)
        printf("%d ", copie[i]);
    printf("\n");

    return 0;
}
