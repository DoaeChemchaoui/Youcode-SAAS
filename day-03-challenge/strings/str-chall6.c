#include <stdio.h>

int main() {
    char chaine[100];
    char c;
    int count = 0;

    printf("Entrez une chaine de caracteres : ");
    fgets(chaine, sizeof(chaine), stdin);

    printf("Entrez un caractere a rechercher : ");
    scanf("%c", &c);

    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == c) {
            count++;
        }
    }

    printf("Le caractere '%c' apparait %d fois dans la chaine.\n", c, count);

    return 0;
}
