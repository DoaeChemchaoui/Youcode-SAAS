#include <stdio.h>

int main() {
    int annee;
    int choix;
    int mois, jours, heures, minutes, secondes;

    printf("Entrez une année (nombre entier) : ");
    scanf("%d", &annee);

    mois = annee * 12;
    jours = annee * 365;
    heures = jours * 24;
    minutes = heures * 60;
    secondes = minutes * 60;

    do {
        printf("\nMenu de conversion pour %d année(s) :\n", annee);
        printf("1. Convertir en Mois\n");
        printf("2. Convertir en Jours\n");
        printf("3. Convertir en Heures\n");
        printf("4. Convertir en Minutes\n");
        printf("5. Convertir en Secondes\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch(choix) {
            case 1:
                printf("%d année(s) = %d mois\n", annee, mois);
                break;
            case 2:
                printf("%d année(s) = %d jours\n", annee, jours);
                break;
            case 3:
                printf("%d année(s) = %d heures\n", annee, heures);
                break;
            case 4:
                printf("%d année(s) = %d minutes\n", annee, minutes);
                break;
            case 5:
                printf("%d année(s) = %d secondes\n", annee, secondes);
                break;
            case 0:
                printf("Sortie du programme.\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while(choix != 0);

    return 0;
}
