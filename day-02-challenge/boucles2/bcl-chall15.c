#include <stdio.h>

int main() {
    int n;
    long fact = 1;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        fact *= i;

    printf("%d! = %ld\n", n, fact);
    return 0;
}
