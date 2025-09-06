#include <stdio.h>

int main() {
    int n;
    int binaire[32], i = 0;

    printf("Entrez un entier : ");
    scanf("%d", &n);

    printf("Hexadecimal : %X\n", n);

    if (n == 0) {
        printf("Binaire : 0\n");
    } else {
        while (n > 0) {
            binaire[i] = n % 2;
            n = n / 2;
            i++;
        }

        printf("Binaire : ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binaire[j]);
        }
        printf("\n");
    }
    return 0;
}
