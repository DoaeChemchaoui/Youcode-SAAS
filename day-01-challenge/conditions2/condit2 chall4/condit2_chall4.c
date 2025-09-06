#include <stdio.h>

int main() {
    float score, scoreFinal;
    int anciennete, recompenses;

    printf("Entrez le score de performance (0-100) : ");
    scanf("%f", &score);

    printf("Entrez l'ancienneté (en années) : ");
    scanf("%d", &anciennete);

    printf("Entrez le nombre de récompenses reçues (0, 1, 2 ou plus) : ");
    scanf("%d", &recompenses);

    scoreFinal = score;
    if (recompenses == 1) {
        scoreFinal *= 1.10;  // +10%
    } else if (recompenses >= 2) {
        scoreFinal *= 1.20;  // +20%
    }

    printf("Score final avec bonus : %.2f\n", scoreFinal);

    if (scoreFinal >= 90 && anciennete >= 5) {
        printf("Performance : Excellente\n");
    } else if (scoreFinal >= 75 && anciennete >= 3) {
        printf("Performance : Bonne\n");
    } else if (scoreFinal >= 50 && anciennete < 3) {
        printf("Performance : Satisfaisante\n");
    } else if (scoreFinal < 50) {
        printf("Performance : Insuffisante\n");
    } else {
        printf("Performance : Non catégorisée\n");
    }

    return 0;
}
