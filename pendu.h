/* Header de pendu.h */

#ifndef _PENDU_H
	#define _PENDU_H
  
		/* CONSTANTES */
		#define TAILLE 5
		
		/* Prototype des fonctions */
		char pendu_lireCaractere();
		void pendu_afficheEtat(char a[], int i);
		int pendu_yaLettre(char x, char b[]);
		void pendu_remplacerLettre(char y, char c[], char (*d)[TAILLE]);
		
#endif