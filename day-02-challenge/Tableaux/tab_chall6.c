#include <stdio.h>
int main(){
    int n, i ,facteur;

    printf("entrer le nombre d'elements");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez %d entiers :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);
    for (i = 0; i < n; i++) {
        tab[i] = tab[i] * facteur;
    }
    printf("Tableau apres multiplication par %d :\n", facteur);
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}