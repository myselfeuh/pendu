#include <stdio.h>
#include <string.h>
#include <ctype.h>


char pendu_lireCaractere() {
	char caractere = 0;
	caractere = getchar();
	caractere = toupper(caractere);

	/* while (getchar() != '\n') {} */

	return caractere;
}


/* affiche le mot dans son etat courant et le nb d'essai restant. */
void pendu_afficheEtat(char mot_affiche[] , int nbEssai) {
	printf("Il vous reste %d essais.\n", nbEssai);
	printf("Quel est le mot secret ? %s\n", mot_affiche);
}


/* renvoit 0 s'il trouve pas et renvoit 1 s'il trouve. */
int pendu_yaLettre(char caractere, char mot_secret[]) {
	int i;
	for (i = 0; mot_secret[i] != '\0'; i++) {
		if (mot_secret[i] == caractere) {
			return 1;
		} else
			return 0;
	}
}

void pendu_remplaceLettre(char caractere, char mot_secret[] , char *p_mot_affiche[]) {
	int i;
	for (i = 0; mot_secret[i] != '\0'; i++) {
		if (caractere == mot_secret[i]) {
			*p_mot_affiche[i] = caractere;
		}
	}
}

