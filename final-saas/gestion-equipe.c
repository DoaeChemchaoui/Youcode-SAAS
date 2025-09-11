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
    return 0;
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

int modifierJoueur() {
    int idRecherche;
    printf("ID du joueur à modifier : ");
    scanf("%d", &idRecherche);

    for (int i = 0; i < nbJoueurs; i++) {
        if (equipe[i].id == idRecherche) {
            printf("Nouveau poste : ");
            scanf("%s", equipe[i].poste);

            printf("Nouvel âge : ");
            scanf("%d", &equipe[i].age);

            printf("Nouveau nombre de buts : ");
            scanf("%d", &equipe[i].buts);

            printf("Modifications enregistrées.\n");
            return 1;
        }
    }

    printf("Joueur non trouvé.\n");
    return 0;
}

int supprimerJoueur() {
    int id;
    printf("ID du joueur à supprimer : ");
    scanf("%d", &id);

    for (int i = 0; i < nbJoueurs; i++) {
        if (equipe[i].id == id) {
            for (int j = i; j < nbJoueurs - 1; j++) {
                equipe[j] = equipe[j + 1];
            }
            nbJoueurs--;
            printf("Joueur supprimé avec succès.\n");
            return 1;
        }
    }
    printf("Joueur non trouvé.\n");
    return 0;
}

int rechercherParID() {
    int id;
    printf("Entrez l'ID du joueur : ");
    scanf("%d", &id);

    for (int i = 0; i < nbJoueurs; i++) {
        if (equipe[i].id == id) {
            afficherJoueur(equipe[i]);
            return 1;
        }
    }
    printf("Aucun joueur trouvé avec cet ID.\n");
    return 0;
}

int rechercherParNom() {
    char nom[30];
    printf("Entrez le nom du joueur : ");
    scanf("%s", nom);

    int trouve = 0;
    for (int i = 0; i < nbJoueurs; i++) {
        if (strcmp(equipe[i].nom, nom) == 0) {
            afficherJoueur(equipe[i]);
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("Aucun joueur trouvé avec ce nom.\n");
    }
    return 0;
}

int afficherStatistiques() {
    if (nbJoueurs == 0) {
        printf("Aucun joueur dans l'équipe.\n");
        return 0;
    }

    int totalAge = 0;
    int maxButs = equipe[0].buts;
    int minAge = equipe[0].age;
    int maxAge = equipe[0].age;
    int indexMaxButs = 0;
    int indexMinAge = 0;
    int indexMaxAge = 0;

    for (int i = 0; i < nbJoueurs; i++) {
        totalAge += equipe[i].age;

        if (equipe[i].buts > maxButs) {
            maxButs = equipe[i].buts;
            indexMaxButs = i;
        }

        if (equipe[i].age < minAge) {
            minAge = equipe[i].age;
            indexMinAge = i;
        }

        if (equipe[i].age > maxAge) {
            maxAge = equipe[i].age;
            indexMaxAge = i;
        }
    }

    float ageMoyen = (float)totalAge / nbJoueurs;

    printf("\n--- Statistiques ---\n");
    printf("Nombre de joueurs : %d\n", nbJoueurs);
    printf("Âge moyen : %.2f ans\n", ageMoyen);

    int x;
    printf("Afficher les joueurs avec plus de combien de buts ? ");
    scanf("%d", &x);

    int trouve = 0;
    for (int i = 0; i < nbJoueurs; i++) {
        if (equipe[i].buts > x) {
            afficherJoueur(equipe[i]);
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("Aucun joueur avec plus de %d buts.\n", x);
    }

    printf("\nMeilleur buteur :\n");
    afficherJoueur(equipe[indexMaxButs]);

    printf("\nPlus jeune joueur :\n");
    afficherJoueur(equipe[indexMinAge]);

    printf("\nPlus âgé joueur :\n");
    afficherJoueur(equipe[indexMaxAge]);

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
            case 6: modifierJoueur(); break;
            case 7: supprimerJoueur(); break;
            case 8: rechercherParID(); break;
            case 9: rechercherParNom(); break;
            case 10: afficherStatistiques(); break;
            case 11: printf("Au revoir !\n"); break;
            default: printf("Choix invalide.\n"); break;
        }

    } while (choix != 11);

    return 0;
}
