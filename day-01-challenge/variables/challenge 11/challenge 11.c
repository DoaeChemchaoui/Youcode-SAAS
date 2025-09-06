#include <stdio.h>

int main() {
    float longueur, largeur, surface;
    printf("Entrez la longueur et la largeur : ");
    scanf("%f %f", &longueur, &largeur);

    surface = longueur * largeur;
    printf("Surface du rectangle = %.2f\n", surface);

    return 0;
}
