#include <stdio.h>

int main() {
    int n;
    printf("Longueur du mot de passe : ");
    scanf("%d", &n);

    char mot[n+1];
    for(int i=0; i<n; i++) {
        if(i % 3 == 0) mot[i] = 'A' + i%26;
        else if(i % 3 == 1) mot[i] = 'a' + i%26;
        else mot[i] = '0' + i%10;
    }
    mot[n] = '\0';

    printf("Mot de passe : %s\n", mot);
    return 0;
}
