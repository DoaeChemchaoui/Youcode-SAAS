#include <stdio.h>
#include <string.h>
int main() {
    char chaine[100];

    printf("Entrez une chaine : ");
    scanf("%s", chaine);
    printf("les caracteres en miniscules: %s",strlwr (chaine));
    
}