#include <stdio.h>

int main() {
    int n, ancien, nouveau;
    printf("Nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements :\n");
    for(int i=0; i<n; i++)
        scanf("%d", &tab[i]);

    printf("Valeur a remplacer : ");
    scanf("%d", &ancien);
    printf("Nouvelle valeur : ");
    scanf("%d", &nouveau);

    for(int i=0; i<n; i++)
        if(tab[i] == ancien)
            tab[i] = nouveau;

    printf("Tableau apres remplacement : ");
    for(int i=0; i<n; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}
