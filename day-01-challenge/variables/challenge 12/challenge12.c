// #include <stdio.h>

// int main() {
//     int nombre, inverse;
//     int mille, cent, dizaine, unite;

//     printf("Entrez un nombre entier a quatre chiffres : ");
//     scanf("%d", &nombre);

//     mille = nombre / 1000;
//     cent = (nombre / 100) % 10;
//     dizaine = (nombre / 10) % 10;
//     unite = nombre % 10;

//     inverse = unite * 1000 + dizaine * 100 + cent * 10 + mille;
//     printf("Le nombre inverse est : %d", inverse);

//     return 0;
// }

#include <stdio.h>

int main() {
    int nombre, inverse = 0 , reste;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    while (nombre > 0) {
        reste = nombre % 10;
        inverse = inverse * 10 + reste;
        nombre = nombre / 10;
    }

    printf("Le nombre inverse est : %d\n", inverse);

    return 0;

}