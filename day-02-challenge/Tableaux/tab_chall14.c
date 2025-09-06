#include <stdio.h>

int main() {
    int n;
    float somme = 0;
    printf("Nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements :\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &tab[i]);
        somme += tab[i];
    }

    printf("Moyenne = %.2f\n", somme / n);
    return 0;
}
