#include <stdio.h>

int main() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    n = n % 7;

    if(n == 0) printf("Lundi\n");
    else if(n == 1) printf("Mardi\n");
    else if(n == 2) printf("Mercredi\n");
    else if(n == 3) printf("Jeudi\n");
    else if(n == 4) printf("Vendredi\n");
    else if(n == 5) printf("Samedi\n");
    else printf("Dimanche\n");

    return 0;
}
