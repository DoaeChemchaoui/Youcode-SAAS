#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, suivant;
    printf("Entrez le nombre de termes : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        printf("%d ", t1);
        suivant = t1 + t2;
        t1 = t2;
        t2 = suivant;
    }
    printf("\n");
    return 0;
}
