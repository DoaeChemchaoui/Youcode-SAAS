#include <stdio.h>

int main() {
    int h1,m1,s1,h2,m2,s2;
    printf("Entrez le premier instant (HH MM SS) : ");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("Entrez le deuxieme instant (HH MM SS) : ");
    scanf("%d %d %d", &h2, &m2, &s2);

    int t1 = h1*3600 + m1*60 + s1;
    int t2 = h2*3600 + m2*60 + s2;

    if (t1 < t2)
        printf("Le premier instant vient avant le deuxieme\n");
    else if (t1 > t2)
        printf("Le deuxieme instant vient avant le premier\n");
    else
        printf("Il s'agit du meme instant\n");

    return 0;
}
