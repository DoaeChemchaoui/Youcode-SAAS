#include <stdio.h>

int main() {
    float salaire_base, taux_horaire, salaire_final;
    int heures_sup, type_poste;

    printf("Salaire de base : ");
    scanf("%f", &salaire_base);
    printf("Nombre d'heures supplementaires : ");
    scanf("%d", &heures_sup);
    printf("Type de poste (1=junior,2=senior) : ");
    scanf("%d", &type_poste);

    taux_horaire = salaire_base / 160;
    salaire_final = salaire_base + heures_sup * taux_horaire * 1.5;

    if (type_poste == 1) salaire_final += salaire_base * 0.10;
    else salaire_final += salaire_base * 0.20;
    printf("Salaire total : %.2f euros\n", salaire_final);

    return 0;
}
