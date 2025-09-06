#include <stdio.h>

int estPremier(int x) {
    if(x < 2) return 0;
    for(int i=2; i*i <= x; i++)
        if(x % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    printf("Entrez un entier : ");
    scanf("%d", &n);

    printf("Nombres premiers jusqu'a %d : ", n);
    for(int i=2; i<=n; i++)
        if(estPremier(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
