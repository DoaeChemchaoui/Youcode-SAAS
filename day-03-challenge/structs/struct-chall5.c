#include <stdio.h>

struct Livre { char titre[50]; char auteur[50]; int annee; };

int main() {
    struct Livre l = {"antigon", "jean anouih", 1944};
    printf("Titre: %s\nAuteur: %s\nAnnee: %d\n", l.titre, l.auteur, l.annee);
    return 0;
}
