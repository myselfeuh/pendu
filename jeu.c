#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	printf("Bonjour, bienvenu dans le jeu du pendu.\n");
	int TAILLE = 5
	char mot_affiche[TAILLE];
	char mot_secret[TAILLE];
	char caractere;
	char[] *p_mot_affiche = &mot_affiche;
	int position;
	int nbEssais = 3;

	strcpy(mot_secret, "PENDU");
	strcpy(mot_affiche, "*****");


	while (!strcmp(mot_secret, mot_affiche) && nbEssais > 0) {

		printf("Entrez une lettre : \n");
		caractere = pendu_lireCaractere();

		if (pendu_yaLettre(caractere, mot_secret)) {
			pendu_remplacerLettre(caractere, mot_secret, p_mot_affiche);
		}

		pendu_afficheEtat(char[] *);


		if (nbEssais == 0) {
			printf("Perdu !\n");
		}
		if (strcmp(mot_secret, mot_affiche)) {
			printf("Gagné !\n");
		}

		nbEssais--;
	}
	
	return 0;
}