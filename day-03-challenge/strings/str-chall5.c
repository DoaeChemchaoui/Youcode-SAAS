#include <stdio.h>
#include <string.h>
int main() {
    char chaine[100];

    printf("Entrez une chaine : ");
    scanf("%s", chaine);
    printf("l'inverse de chaine: %s",strrev (chaine));
    return 0 ;
}