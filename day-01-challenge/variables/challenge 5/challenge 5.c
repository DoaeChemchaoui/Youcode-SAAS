#include <stdio.h>

int main() {
    float celsius;
    printf("Entrez la température en Celsius : ");
    scanf("%f", &celsius);

    if (celsius < 0)
        printf("État : Solide\n");
    else if (celsius >= 0 && celsius < 100)
        printf("État : Liquide\n");
    else
        printf("État : Gaz\n");

    return 0;
}