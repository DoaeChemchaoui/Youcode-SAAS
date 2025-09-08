#include <stdio.h>

struct Rectangle { float longueur, largeur; };

int main() {
    struct Rectangle r = {5, 3};
    float aire = r.longueur * r.largeur;
    printf("Aire = %.2f\n", aire);
    return 0;
}