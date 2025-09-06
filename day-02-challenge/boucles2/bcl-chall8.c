#include <stdio.h>

int main() {
    int n;
    printf("Nombre d'elements du tableau trie : ");
    scanf("%d", &n);
    int tab[n];
    printf("Entrez les elements en ordre croissant :\n");
    for(int i=0; i<n; i++) scanf("%d", &tab[i]);

    int val, debut=0, fin=n-1, trouve=0;
    printf("Entrez la valeur a rechercher : ");
    scanf("%d", &val);

    while(debut <= fin) {
        int milieu = (debut + fin) / 2;
        if(tab[milieu] == val) { trouve = 1; break; }
        else if(tab[milieu] < val) debut = milieu + 1;
        else fin = milieu - 1;
    }

    if(trouve) printf("Valeur presente\n");
    else printf("Valeur absente\n");
    return 0;
}
