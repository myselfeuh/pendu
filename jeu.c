#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "pendu.h"

int main() {
	
	char mot_affiche[TAILLE];
	char mot_secret[TAILLE];
	char caractere;
	/* char (*p_mot_affiche)[TAILLE]; */
	int nbEssais;
	/* p_mot_affiche = &mot_affiche; */
	nbEssais = 3;

	printf("Bonjour, bienvenu dans le jeu du pendu.\n");


	strcpy(mot_secret, "PENDU");
	strcpy(mot_affiche, "*****");


	while ((strcmp(mot_secret, mot_affiche) != 0) && (nbEssais > 0)) {
		
		pendu_afficheEtat(mot_affiche, nbEssais);
		printf("Entrez une lettre : \n");
		caractere = pendu_lireCaractere();

		if (pendu_yaLettre(caractere, mot_secret)) {
			pendu_remplacerLettre(caractere, mot_secret, &mot_affiche);
		} else {
			nbEssais--;
		}
		if (nbEssais == 0) {
			printf("Perdu !\n");
		}
		if (strcmp(mot_secret, mot_affiche) == 0) {
			printf("Gagné !\n");
		}
	}
	
	return 0;
}