#include <stdio.h>
#include <string.h>

struct Contact {
    char nom[50];
    char telephone[20];
    char email[50];
};

int main() {
    int MAX_CONTACTS = 100; 
    struct Contact contacts[MAX_CONTACTS];
    int nbContacts = 0;
    int choix;
 
    do {
        printf("\nMENU GESTION DE CONTACTS\n");
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contacts\n");
        printf("5. Rechercher un contact\n");
        printf("6. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        if (choix == 1) {
            if (nbContacts < MAX_CONTACTS) {
                printf("Nom : ");
                scanf("%s", contacts[nbContacts].nom);

                printf("Telephone : ");
                scanf("%s", contacts[nbContacts].telephone);

                printf("Email : ");
                scanf("%s", contacts[nbContacts].email);

                nbContacts++;
                printf("Contact ajoute avec succes !\n");
            } else {
                printf("Carnet plein, impossible d'ajouter.\n");
            }
        } 
        else if (choix == 2) {
            char nom[50];
            printf("Entrer le nom du contact a modifier : ");
            scanf("%s", nom);
            int trouve = 0;

            for (int i = 0; i < nbContacts; i++) {
                if (strcmp(contacts[i].nom, nom) == 0) {
                    printf("Nouveau telephone : ");
                    scanf("%s", contacts[i].telephone);
                    printf("Nouvel email : ");
                    scanf("%s", contacts[i].email);
                    printf("Contact modifie !\n");
                    trouve = 1;
                    break;
                }
            }
            if (!trouve) {
                printf("Contact introuvable.\n");
            }
        } 
        else if (choix == 3) {
            char nom[50];
            printf("Entrer le nom du contact a supprimer : ");
            scanf("%s", nom);
            int trouve = 0;

            for (int i = 0; i < nbContacts; i++) {
                if (strcmp(contacts[i].nom, nom) == 0) {
                    for (int j = i; j < nbContacts; j++) {
                        contacts[j] = contacts[j + 1];
                    }
                    nbContacts--;
                    printf("Contact supprime !\n");
                    trouve = 1;
                    break;
                }
            }
            if (!trouve) {
                printf("Contact introuvable.\n");
            }
        } 
        else if (choix == 4) {
            if (nbContacts == 0) {
                printf("Aucun contact enregistre.\n");
            } else {
                printf("\nListe des contacts :\n");
                for (int i = 0; i < nbContacts; i++) {
                    printf("Nom: %s ; Telephone: %s ; Email: %s\n",
                           contacts[i].nom, contacts[i].telephone, contacts[i].email);
                }
            }
        } 
        else if (choix == 5) { 
            char nom[50];
            printf("Entrer le nom du contact a rechercher : ");
            scanf("%s", nom);
            int trouve = 0;

            for (int i = 0; i < nbContacts; i++) {
                if (strcmp(contacts[i].nom, nom) == 0) {
                    printf("Contact trouve : %s ; %s ; %s\n",
                           contacts[i].nom, contacts[i].telephone, contacts[i].email);
                    trouve = 1;
                    break;
                }
            }
            if (!trouve) {
                printf("Contact introuvable.\n");
            }
        }

    } while (choix != 6);

    printf("Programme termine.\n");
    return 0;
}