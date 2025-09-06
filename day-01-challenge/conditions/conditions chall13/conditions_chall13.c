#include <stdio.h>

int main() {
    float x1, y1, x2, y2;
    float px, py;

    printf("Entrez les coordonnées du segment (x1 y1 x2 y2) : ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    printf("Entrez les coordonnées du point (px py) : ");
    scanf("%f %f", &px, &py);

    float cross = (px - x1)*(y2 - y1) - (py - y1)*(x2 - x1);

    if(cross != 0) {
        printf("Le point n'est pas sur le segment.\n");
        return 0;
    }

    int a = 0, b = 0;

    if(px >= x1) {
        if(px <= x2) a = 1;
    } else {
        if(px <= x1) {
            if(px >= x2) a = 1;
        }
    }

    if(py >= y1) {
        if(py <= y2) b = 1;
    } else {
        if(py <= y1) {
            if(py >= y2) b = 1;
        }
    }

    if(a == 1) {
        if(b == 1) {
            printf("Le point est sur le segment.\n");
        } else {
            printf("Le point n'est pas sur le segment.\n");
        }
    } else {
        printf("Le point n'est pas sur le segment.\n");
    }

    return 0;
}
