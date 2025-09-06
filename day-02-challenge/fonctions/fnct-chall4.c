#include <stdio.h>

int minimum(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &x, &y);

    printf("Minimum = %d\n", minimum(x, y));
    return 0;
}
