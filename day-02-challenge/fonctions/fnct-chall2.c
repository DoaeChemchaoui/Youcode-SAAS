#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &x, &y);

    printf("Produit = %d\n", produit(x, y));
    return 0;
}
