#include <stdio.h>
#include <string.h> 

int ajouterLivre(int nombreLivres, char titres[][100], char auteurs[][100], float prix[], int quantites[]) {
    if (nombreLivres >= 100) {
        printf("Stock plein, impossible d'ajouter un nouveau livre.\n");
        return nombreLivres; 
    }

    printf("Titre du livre : ");
    scanf("%s", titres[nombreLivres]);

    printf("Auteur du livre : ");
    scanf("%s", auteurs[nombreLivres]);

    printf("Prix : ");
    scanf("%f", &prix[nombreLivres]);

    printf("Quantite : ");
    scanf("%d", &quantites[nombreLivres]);

    nombreLivres++;  

    printf("Livre ajoute avec succes.\n");
    return nombreLivres;  
}

int afficherLivres(int nombreLivres, char titres[][100], char auteurs[][100], float prix[], int quantites[]) {
    if (nombreLivres == 0) {
        printf("Aucun livre dans le stock.\n");
        return 0;
    }

    printf("\nListe des livres disponibles :\n");
    for (int i = 0; i < nombreLivres; i++) {
        printf("Livre %d :\n", i + 1);
        printf("Titre : %s\n", titres[i]);
        printf("Auteur : %s\n", auteurs[i]);
        printf("Prix : %.2f\n", prix[i]);
        printf("Quantite : %d\n", quantites[i]);
    }
    return nombreLivres; 
}

int rechercherLivre(int nombreLivres, char titres[][100], char auteurs[][100], float prix[], int quantites[]) {
    char recherche[100];
    printf("Entrez le titre du livre à rechercher : ");
    scanf("%s", recherche);

    for (int i = 0; i < nombreLivres; i++) {
        if (strcmp(titres[i], recherche) == 0) {
            printf("\n Livre trouvé :\n");
            printf("Titre : %s\n", titres[i]);
            printf("Auteur : %s\n", auteurs[i]);
            printf("Prix : %.2f\n", prix[i]);
            printf("Quantité : %d\n", quantites[i]);
            return 1;
        }
    }

    printf("Livre non trouvé.\n");
    return 0;
}

int mettreAJourQuantite(int nombreLivres, char titres[][100], int quantites[]) {
    char recherche[100];
    printf("Entrez le titre du livre à mettre à jour : ");
    scanf("%s", recherche);
    for (int i = 0; i < nombreLivres; i++) {
        if (strcmp(titres[i], recherche) == 0) {
            printf("Nouvelle quantité : ");
            scanf("%d", &quantites[i]);
            printf("Quantité mise à jour avec succès !\n");
            return 1;
        }
    }
    printf("Livre non trouvé.\n");
    return 0;
}

int supprimerLivre(int nombreLivres, char titres[][100], char auteurs[][100], float prix[], int quantites[]) {
    char recherche[100];
    printf("Entrez le titre du livre à supprimer : ");
    scanf("%s", recherche);

    for (int i = 0; i < nombreLivres; i++) {
        if (strcmp(titres[i], recherche) == 0) {
            for (int j = i; j < nombreLivres - 1; j++) {
                strcpy(titres[j], titres[j + 1]);
                strcpy(auteurs[j], auteurs[j + 1]);
                prix[j] = prix[j + 1];
                quantites[j] = quantites[j + 1];
            }
            printf("Livre supprimé avec succès.\n");
            return nombreLivres - 1;
        }
    }

    printf("Livre non trouvé.\n");
    return nombreLivres;
}

int totalLivres(int nombreLivres, int quantites[]) {
    int total = 0;
    for (int i = 0; i < nombreLivres; i++) {
        total += quantites[i];
    }
    printf("Nombre total de livres en stock : %d\n", total);
    return total;
}

int main() {
    int choix;
    int nombreLivres = 0;
    char titres[100][100];
    char auteurs[100][100];
    float prix[100];
    int quantites[100];

    do {
        printf("\nGestion de stock des livres\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponibles\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Supprimer un livre du stock\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("7. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                nombreLivres = ajouterLivre(nombreLivres, titres, auteurs, prix, quantites);
                break;
            case 2:
                afficherLivres(nombreLivres, titres, auteurs, prix, quantites);
                break;
            case 3:
                rechercherLivre(nombreLivres, titres, auteurs, prix, quantites);
                break;
            case 4:
                mettreAJourQuantite(nombreLivres, titres, quantites);
                break;
            case 5:
                nombreLivres = supprimerLivre(nombreLivres, titres, auteurs, prix, quantites);
                break;
            case 6:
                totalLivres(nombreLivres, quantites);
                break;
            default:
                printf("Choix invalide, réessayez.\n");
        }

    } while (choix != 7);

    return 0;
}
