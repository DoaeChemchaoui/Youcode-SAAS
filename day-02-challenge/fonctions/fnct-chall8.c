#include <stdio.h>

int estPair(int n) {
    return (n % 2 == 0) ? 1 : 0;
}

int main() {
    int n;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    if(estPair(n)) printf("%d est pair\n", n);
    else printf("%d est impair\n", n);

    return 0;
}
