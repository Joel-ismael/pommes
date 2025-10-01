#include <stdio.h>

// Fonction pour verifier si le tableau est trie 
int Est_Trie(int tab[], int size) {
    // Parcourir le tableau a partir du deuxieme element
    for (int i = 1; i < size; i++) {
        // Verifier si l'element actuel est inferieur a l'element precedent
        if (tab[i] < tab[i - 1]) {
            return 0; // Le tableau n'est pas trie
        }
    }
    return 1; // Le tableau est trie
}

int main() {
    int tab[100]; // Declaration d'un tableau de taille maximale 100
    int size;

    // Demande a l'utilisateur d'entrer la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &size);

    // Verification de la taille
    if (size <= 0) {
        printf("Taille invalide.\n");
        return 1; // Terminer le programme si la taille est invalide
    }

    // Demande a l'utilisateur d'entrer les valeurs du tableau
    printf("Entrez les valeurs du tableau :\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tab[i]); // Lire chaque element du tableau
    }

    // Verification si le tableau est trie
    if (Est_Trie(tab, size)) {
        printf("Le tableau est trie.\n");
    } else {
        printf("Le tableau n'est pas trie.\n");
    }

    return 0; 
}