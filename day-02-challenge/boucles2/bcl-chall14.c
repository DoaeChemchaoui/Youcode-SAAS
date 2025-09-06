#include <stdio.h>
#include <string.h>

int main() {
    char jours[7][10] = {"Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
    char choix[10];
    int index=-1;

    printf("Jours de la semaine : Lundi Mardi Mercredi Jeudi Vendredi Samedi Dimanche\n");
    printf("Choisissez un jour : ");
    scanf("%s", choix);

    for(int i=0; i<7; i++)
        if(strcmp(choix, jours[i]) == 0) { index=i; break; }

    if(index != -1) {
        printf("Jours selectionnes et suivants : ");
        for(int i=index; i<7; i++) printf("%s ", jours[i]);
        printf("\n");
    } else printf("Jour invalide\n");

    return 0;
}
