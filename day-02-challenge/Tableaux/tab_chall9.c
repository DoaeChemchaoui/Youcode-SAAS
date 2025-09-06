#include <stdio.h>

int main() {
    int n;
    printf("Nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];

    printf("Entrez les elements du tableau :\n");
    for(int i=0; i<n; i++)
        scanf("%d", &tab[i]);

    printf("Tableau inverse : ");
    for(int i=n-1; i>=0; i--)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}
