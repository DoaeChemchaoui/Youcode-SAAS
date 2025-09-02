#include <stdio.h>

int main() {
    float km, yards;
    printf("Entrez la distance en kilomètres : ");
    scanf("%f", &km);

    yards = km * 1093.61;
    printf("Distance en yards : %.2f\n", yards);

    return 0;
}