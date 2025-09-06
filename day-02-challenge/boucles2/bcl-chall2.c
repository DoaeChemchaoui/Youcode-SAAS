#include <stdio.h>

int estPremier(int x) {
    if(x < 2) return 0;
    for(int i=2; i*i <= x; i++)
        if(x % i == 0) return 0;
    return 1;
}

int main() {
    int lignes;
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lignes);

    int n_etoiles = 2;
    while(!estPremier(n_etoiles)) n_etoiles++;

    for(int i=1; i<=lignes; i++) {
        for(int j=0; j<(lignes-i); j++) printf(" ");
        int etoiles = n_etoiles;
        while(!estPremier(etoiles)) etoiles++;
        for(int j=0; j<etoiles; j++) printf("*");
        printf("\n");
        n_etoiles = etoiles + 1;
    }
    return 0;
}
