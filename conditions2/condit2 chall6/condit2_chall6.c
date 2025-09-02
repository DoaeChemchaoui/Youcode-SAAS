#include <stdio.h>

int main() {
    float consommation, tarif, facture;
    int typeUtilisateur, typeContrat;

    scanf("%f", &consommation);
    scanf("%d", &typeUtilisateur);
    scanf("%d", &typeContrat);

    if (typeUtilisateur == 1) {
        if (typeContrat == 0)
            tarif = 0.20;
        else if (typeContrat == 1)
            tarif = 0.15;
        else
            return 1;
    } else if (typeUtilisateur == 2) {
        if (typeContrat == 0)
            tarif = 0.30;
        else if (typeContrat == 1)
            tarif = 0.25;
        else
            return 1;
    } else {
        return 1;
    }

    facture = consommation * tarif;

    if (consommation > 500) {
        facture *= 1.10;
    }

    printf("%.2f\n", facture);

    return 0;
}
