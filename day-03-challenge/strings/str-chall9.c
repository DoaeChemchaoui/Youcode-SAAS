#include <stdio.h>

int main() {
    char str[100];
    char result[100];
    int i, j;
    printf("Entrez une chaine de caracteres : ");
    fgets(str, 100, stdin);
    j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') { 
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    for (i = 0; result[i] != '\0'; i++) {
    }
    printf("Chaine sans espaces : %s", result);

    return 0;
}
