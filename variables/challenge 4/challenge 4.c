#include <stdio.h>

int main() {
    float kmh, ms;
    printf("Entrez la vitesse en km/h : ");
    scanf("%f", &kmh);

    ms = kmh * 0.27778;
    printf("Vitesse en m/s : %.2f\n", ms);

    return 0;
}