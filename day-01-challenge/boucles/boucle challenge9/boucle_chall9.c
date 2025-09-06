#include <stdio.h>

int main() {
    int n, compteur = 0;
    scanf("%d", &n);

    if (n == 0) compteur = 1;
    else {
        do {
            n /= 10;
            compteur++;
        } while (n != 0);
    }

    printf("Nombre de chiffres = %d\n", compteur);
    return 0;
}
