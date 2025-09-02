#include <stdio.h>

int main() {
    
    char nom[50], prenom[50], sexe[10], email[100];
    int age;

    printf("ecrivez votre nom ");
    scanf("%s", nom);

    printf("ecriver votre prenom ");
    scanf("%s", prenom);

    printf("ecriver votre age ");
    scanf("%d", age);

    printf("ecriver votre sexe ");
    scanf("%s", sexe);

    printf("ecriver votre adresse email  ");
    scanf("%s", email);

    printf("Informations personnelles :");
    printf("Nom : %s", nom);
    printf("Prénom : %s", prenom);
    printf("Âge : %d ans", age);
    printf("Sexe : %s", sexe);
    printf("Email : %s", email);

    return 0;
    }
