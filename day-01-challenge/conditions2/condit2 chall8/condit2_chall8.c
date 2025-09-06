#include <stdio.h>

int main() {
    int age, historique, typeCouverture;

    printf("Entrez l'âge : ");
    scanf("%d", &age);

    printf("Entrez l'historique médical (0: aucun, 1: mineur, 2: majeur) : ");
    scanf("%d", &historique);

    printf("Entrez le type de couverture (1: base, 2: étendue) : ");
    scanf("%d", &typeCouverture);

    if (age < 30) {
        printf("Plan de base\n");
    } else if (age >= 30 && historique == 0) {
        printf("Plan de base\n");
    } else if (age >= 30 && historique >= 1) {
        printf("Plan étendu\n");
        if (historique == 2) {
            printf("Couverture supplémentaire pour problèmes majeurs\n");
        }
    } else {
        printf("Plan non défini\n");
    }

    return 0;
}
