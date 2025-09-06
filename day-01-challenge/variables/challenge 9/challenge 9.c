#include <stdio.h>

int main() {
    float x1, y1, z1, x2, y2, z2, distance;

    printf("Entrez x1 y1 z1 : ");
    scanf("%f %f %f", &x1, &y1, &z1);

    printf("Entrez x2 y2 z2 : ");
    scanf("%f %f %f", &x2, &y2, &z2);

    distance = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1);

    printf("Distance = %.2f\n", distance);

    return 0;
}
