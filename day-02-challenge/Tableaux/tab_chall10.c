#include <stdio.h>

int main() {
    int n, elem, trouve = 0;
    printf("Nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements :\n");
    for(int i=0; i<n; i++)
        scanf("%d", &tab[i]);

    printf("Element a rechercher : ");
    scanf("%d", &elem);

    for(int i=0; i<n; i++)
        if(tab[i] == elem) {
            trouve = 1;
            break;
        }

    if(trouve) printf("Element present dans le tableau\n");
    else printf("Element non present\n");

    return 0;
}
