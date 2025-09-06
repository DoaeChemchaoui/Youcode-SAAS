#include <stdio.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &x, &y);

    printf("Somme = %d\n", somme(x, y));
    return 0;
}
