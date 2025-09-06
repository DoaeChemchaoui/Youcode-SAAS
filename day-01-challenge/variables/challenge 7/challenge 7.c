#include <stdio.h>

int main() {
    float n1, n2, n3;
    float moyenne;

    printf("Entrez trois nombres : ");
    scanf("%f %f %f", &n1, &n2, &n3);

    moyenne = (n1 * 2 + n2 * 3 + n3 * 5) / (2 + 3 + 5);

    printf("La moyenne pondérée est : %.2f\n", moyenne);

    return 0;
}
