#include <stdio.h>

int main() {
    float r, volume;
    const float PI = 3.14159;
    printf("Entrez le rayon : ");
    scanf("%f", &r);

    volume = (4.0/3.0) * PI * (r * r * r);

    printf("Volume de la sphere = %.2f\n", volume);

    return 0;
}
