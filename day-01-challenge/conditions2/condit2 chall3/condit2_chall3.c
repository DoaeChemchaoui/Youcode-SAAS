#include <stdio.h>

int main() {
    int total, utilises, statut;
    float restants;

    printf("Jours de congés accordes : ");
    scanf("%d", &total);
    printf("Jours de congés utilises : ");
    scanf("%d", &utilises);
    printf("Statut de l'employe (0=temps partiel, 1=temps plein) : ");
    scanf("%d", &statut);

    if (statut == 1)
        restants = total - utilises;
        restants = (total / 2.0) - utilises;

    if (restants < 0)
        printf("Alerte : depassement des jours de congé !\n");
    else
        printf("Jours de congé restants : %.2f\n", restants);

    return 0;
}
