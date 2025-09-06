#include <stdio.h>

int main() {
    int age, anneesCotisation;
    float montantEpargne, bonus = 0.0;

    printf("Entrez l'âge : ");
    scanf("%d", &age);

    printf("Entrez les années de cotisation : ");
    scanf("%d", &anneesCotisation);

    printf("Entrez le montant total épargné (en euros) : ");
    scanf("%f", &montantEpargne);

    if (age < 65) {
        printf("Plan épargne non encore disponible\n");
        return 0;
    }

    if (montantEpargne > 50000) {
        int tranches = (int)((montantEpargne - 50000) / 10000);
        bonus = 0.05f * tranches;
    }

    if (age >= 65 && anneesCotisation >= 30 && montantEpargne >= 100000) {
        printf("Plan complet avec pension élevée\n");
        printf("Bonus : %.2f%%\n", bonus * 100);
    } else if (age >= 65 && anneesCotisation >= 20 && montantEpargne >= 50000) {
        printf("Plan partiel avec pension moyenne\n");
        printf("Bonus : %.2f%%\n", bonus * 100);
    } else {
        printf("Pas éligible pour un plan de retraite\n");
    }

    return 0;
}
