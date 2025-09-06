#include <stdio.h>

int main() {
    int nb;
    float somme = 0;
    int count = 0;

    printf("Entrez des nombres positifs (0 pour terminer) :\n");
    while(1) {
        scanf("%d", &nb);
        if(nb == 0) break;
        somme += nb;
        count++;
    }

    if(count > 0)
        printf("Moyenne = %.2f\n", somme / count);
    else
        printf("Aucun nombre saisi\n");

    return 0;
}
