#include <stdio.h>

long factorielle(int n) {
    long f = 1;
    for(int i=1; i<=n; i++)
        f *= i;
    return f;
}

int main() {
    int n;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    printf("%d! = %ld\n", n, factorielle(n));
    return 0;
}
