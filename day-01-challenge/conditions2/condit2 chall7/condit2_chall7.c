#include <stdio.h>

int main() {
    float revenu, deductions = 0, impot;
    int statut;

    printf("Revenu annuel : ");
    scanf("%f", &revenu);
    printf("Statut fiscal (1=celibataire,2=marie,3=chef famille) : ");
    scanf("%d", &statut);

    if (statut == 1) deductions = 1000;
    else if (statut == 2) deductions = 2000;
    else deductions = 3000;

    revenu -= deductions;

    if (revenu <= 20000) impot = revenu * 0.05;
    else if (revenu <= 50000) impot = revenu * 0.10;
    else impot = revenu * 0.20;

    printf("Impots a payer : %.2f euros\n", impot);

    return 0;
}
