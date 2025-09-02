#include <stdio.h>

int main() {
    int age, typeVoiture, nbAccidents;
    float primeBase = 500.0; 
    float prime;

    printf("Entrez l'âge du conducteur : ");
    scanf("%d", &age);

    printf("Entrez le type de voiture (1: sportive, 2: utilitaire, 3: familiale) : ");
    scanf("%d", &typeVoiture);

    printf("Entrez le nombre d'accidents au cours des 5 dernières années : ");
    scanf("%d", &nbAccidents);

    if (age < 25) {
        prime = primeBase * 1.5;
    } else if (age <= 65) {
        prime = primeBase;
    } else {
        prime = primeBase * 1.2;
    }

    if (typeVoiture == 1) {
        prime *= 2;
    } else if (typeVoiture == 2) {
        prime *= 1.2;
    } else if (typeVoiture == 3) {
        prime *= 1.1;
    } else {
        printf("Type de voiture invalide.\n");
        return 1;
    }

    if (nbAccidents > 1) {
        prime *= 1.3;
    }

    printf("La prime d'assurance est : %.2f euros\n", prime);

    return 0;
}
