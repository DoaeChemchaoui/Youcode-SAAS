#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h>

int MAX_JOUEURS = 100;

struct Joueur {
    int id;
    char nom[30];
    char prenom[30];
    int numeroMaillot;
    char poste[20];
    int age;
    int buts;
    char dateInscription[11];
    char statut[15];
};

struct Joueur equipe[100];
int nbJoueurs = 0;
int prochainID = 1;


int ajouterJoueurs() {
    int nombre;
    printf("Combien de joueurs voulez-vous ajouter ? ");
    scanf("%d", &nombre);

    for (int i = 0; i < nombre; i++) {
        if (nbJoueurs >= MAX_JOUEURS) {
            printf("Nombre maximum de joueurs atteint.\n");
            break;
        }

        printf("\n--- Ajout du joueur %d ---\n", i + 1);
        struct Joueur j;

        j.id = prochainID++;

        printf("Nom : ");
        scanf("%s", j.nom);

        printf("Prénom : ");
        scanf("%s", j.prenom);

        printf("Numéro de maillot : ");
        scanf("%d", &j.numeroMaillot);

        printf("Poste (gardien/défenseur/milieu/attaquant) : ");
        scanf("%s", j.poste);

        printf("Âge : ");
        scanf("%d", &j.age);

        printf("Nombre de buts : ");
        scanf("%d", &j.buts);

        printf("Statut (titulaire/remplaçant) : ");
        scanf("%s", j.statut);

        obtenirDateActuelle(j.dateInscription);

        equipe[nbJoueurs++] = j;

        printf("Joueur %s %s ajouté avec succès.\n", j.prenom, j.nom);

        if (j.buts >= 10) {
            printf("%s %s est une star de l'équipe !\n", j.prenom, j.nom);
        }
    }

    return 0;
}

int afficherJoueur(struct Joueur j) {
    printf("\nID : %d\n", j.id);
    printf("Nom : %s\n", j.nom);
    printf("Prénom : %s\n", j.prenom);
    printf("Numéro de maillot : %d\n", j.numeroMaillot);
    printf("Poste : %s\n", j.poste);
    printf("Âge : %d\n", j.age);
    printf("Buts : %d\n", j.buts);
    printf("Statut : %s\n", j.statut);
    return 0;  // fonction retourne int donc ajouter return
}

int afficherJoueurs() {
    if (nbJoueurs == 0) {
        printf("Aucun joueur dans l'équipe.\n");
        return 0;
    }

    for (int i = 0; i < nbJoueurs; i++) {
        afficherJoueur(equipe[i]);
    }
    return 0;
}

int trierParNom() {
    struct Joueur temp;
    for (int i = 0; i < nbJoueurs - 1; i++) {
        for (int j = i + 1; j < nbJoueurs; j++) {
            if (strcmp(equipe[i].nom, equipe[j].nom) > 0) {
                temp = equipe[i];
                equipe[i] = equipe[j];
                equipe[j] = temp;
            }
        }
    }

    printf("\n--- Joueurs triés par nom ---\n");
    for (int i = 0; i < nbJoueurs; i++) {
        afficherJoueur(equipe[i]);
    }

    return 0;
}

int trierParAge() {
    struct Joueur temp;
    for (int i = 0; i < nbJoueurs - 1; i++) {
        for (int j = i + 1; j < nbJoueurs; j++) {
            if (equipe[i].age > equipe[j].age) {
                temp = equipe[i];
                equipe[i] = equipe[j];
                equipe[j] = temp;
            }
        }
    }

    printf("\n--- Joueurs triés par âge ---\n");
    for (int i = 0; i < nbJoueurs; i++) {
        afficherJoueur(equipe[i]);
    }

    return 0;
}

int afficherParPoste() {
    char posteRecherche[20];
    printf("Entrez le poste à afficher : ");
    scanf("%s", posteRecherche);

    int trouve = 0;
    for (int i = 0; i < nbJoueurs; i++) {
        if (strcmp(equipe[i].poste, posteRecherche) == 0) {
            afficherJoueur(equipe[i]);
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("Aucun joueur trouvé pour ce poste.\n");
    }

    return 0;
}


int menu() {
    printf("\n--- MENU ---\n");
    printf("1. Ajouter un joueur\n");
    printf("2. Afficher tous les joueurs\n");
    printf("3. Trier joueurs par nom\n");
    printf("4. Trier joueurs par âge\n");
    printf("5. Afficher joueurs par poste\n");
    printf("6. Modifier un joueur\n");
    printf("7. Supprimer un joueur\n");
    printf("8. Rechercher un joueur par ID\n");
    printf("9. Rechercher un joueur par nom\n");
    printf("10. Afficher statistiques\n");
    printf("11. Quitter\n");
    printf("Votre choix : ");

    int choix;
    scanf("%d", &choix);
    return choix;
}

int main() {
    int choix;

    do {
        choix = menu();

        switch (choix) {
            case 1: ajouterJoueurs(); break;
            case 2: afficherJoueurs(); break;
            case 3: trierParNom(); break;
            case 4: trierParAge(); break;
            case 5: afficherParPoste(); break;
            // case 6: modifierJoueur(); break;
            // case 7: supprimerJoueur(); break;
            // case 8: rechercherParID(); break;
            // case 9: rechercherParNom(); break;
            // case 10: afficherStatistiques(); break;
            case 11: printf("Au revoir !\n"); break;
            default: printf("Choix invalide.\n"); break;
        }

    } while (choix != 11);

    return 0;
}
