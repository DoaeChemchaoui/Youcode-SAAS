#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, mg;
    printf("Entrez trois nombres : ");
    scanf("%f %f %f", &a, &b, &c);

    mg = cbrt(a * b * c);
    printf("Moyenne geometrique = %.2f\n", mg);

    return 0;
}
