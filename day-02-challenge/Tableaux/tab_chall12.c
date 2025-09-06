#include <stdio.h>

int main() {
    int n;
    printf("Nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements :\n");
    for(int i=0; i<n; i++)
        scanf("%d", &tab[i]);

    printf("Elements pairs : ");
    for(int i=0; i<n; i++)
        if(tab[i] % 2 == 0)
            printf("%d ", tab[i]);
    printf("\n");

    return 0;
}
