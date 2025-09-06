#include <stdio.h>

int main() {
    int n, somme = 0;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++) {
        int prod = n*i;
        somme += prod;
        printf("%d * %d = %d\n", n, i, prod);
    }
    printf("Somme des produits = %d\n", somme);
    return 0;
}
