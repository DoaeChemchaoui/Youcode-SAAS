#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Entrez a b c : ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Ce n'est pas une equation du second degre\n");
    } else {
        delta = b*b - 4*a*c;
        if (delta < 0)
            printf("Pas de solution reelle\n");
        else if (delta == 0) {
            x1 = -b / (2*a);
            printf("Solution unique : x = %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("Deux solutions : x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}
