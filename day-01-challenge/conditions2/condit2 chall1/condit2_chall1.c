#include <stdio.h>

int main() {
    float revenu;
    int score, duree;

    printf("Entrez le revenu annuel : ");
    scanf("%f", &revenu);
    printf("Entrez le score de credit : ");
    scanf("%d", &score);
    printf("Entrez la duree du pret (en ans) : ");
    scanf("%d", &duree);

    if (revenu >= 30000 && score >= 700 && duree <= 10)
        printf("Eligibilite : Eligible\n");
    else if (revenu >= 30000 && score >= 650 && duree <= 15)
        printf("Eligibilite : Eligible avec conditions\n");
    else
        printf("Eligibilite : Non eligible\n");

    return 0;
}
