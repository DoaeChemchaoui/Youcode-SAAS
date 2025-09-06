#include <stdio.h>

int main() {
    int n, count = 0, number = 1;

    printf("Entrez le nombre de nombres impairs à afficher : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres impairs sont : ", n);

    while (count < n) {
        printf("%d ", number);
        number += 2;
        count++;
    }

    printf("\n");
    return 0;
}
