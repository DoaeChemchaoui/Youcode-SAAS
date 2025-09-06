#include <stdio.h>

int main() {
    int base, exp, resultat = 1;
    printf("Entrez la base et l'exposant : ");
    scanf("%d %d", &base, &exp);

    while(exp > 0) {
        resultat *= base;
        exp--;
    }

    printf("Resultat = %d\n", resultat);
    return 0;
}
