#include <stdio.h>

int main() {
    float n;
    printf("Entrez un nombre : ");
    scanf("%f", &n);

    if (n > 0)
        printf("Positif\n");
    else if (n < 0)
        printf("Negatif\n");
    else
        printf("Nul\n");

    return 0;
}
