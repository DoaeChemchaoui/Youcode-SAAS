#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractère : ");
    scanf(" %c", &caractere);

    if (caractere >= 'A' && caractere <= 'Z') {
        printf("'%c' est une lettre majuscule.\n", caractere);
    } else {
        if (caractere >= 'a' && caractere <= 'z') {
            printf("'%c' est une lettre minuscule.\n", caractere);
        } else {
            printf("'%c' n'est pas une lettre de l'alphabet.\n", caractere);
        }
    }

    return 0;
}
