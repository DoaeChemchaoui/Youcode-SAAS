#include <stdio.h>

int main() {
    struct Etudiant {
        char nom[20];
        char prenom[20];
        int notes[3];
    };

    struct Etudiant e = {"chemchaoui", "doae", {12, 14, 16}};

    printf("Nom : %s\n", e.nom);
    printf("Prenom : %s\n", e.prenom);
    printf("Notes : %d %d %d\n", e.notes[0], e.notes[1], e.notes[2]);

    return 0;
}
