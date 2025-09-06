#include <stdio.h>

int main() {
    int n, somme = 0;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        somme += i;

    printf("Somme = %d\n", somme);
    return 0;
}
