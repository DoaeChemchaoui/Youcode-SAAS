#include <stdio.h>

int main() {
    char longu[100];
    int i = 0;

    printf("Entrez une chaine : ");
    scanf("%s", longu);
    
    while (longu[i] != '\0') {
        i++;
    }

    printf("La longueur de la chaine est : %d\n", i);

    return 0;
}