#include <stdio.h>

int main() {
    char c;
    printf("Entrez un caractere : ");
    scanf(" %c", &c);

    switch(c) {
        case 'a':case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("C'est une voyelle\n");
            break;
        default:
            printf("Ce n'est pas une voyelle\n");
    }

    return 0;
}
