#include <stdio.h>

int main() {
    float moyenne;
    printf("Entrez la moyenne : ");
    scanf("%f", &moyenne);

    if (moyenne < 10)
        printf("Recale\n");
    else if (moyenne < 12)
        printf("Passable\n");
    else if (moyenne < 14)
        printf("Assez bien\n");
    else if (moyenne < 16)
        printf("Bien\n");
    else
        printf("Très bien\n");

    return 0;
}
