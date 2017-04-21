/*---------------------------------------------------------------*/
/*                                                               */
/*                          main.c                               */
/* Role: Définition de la fonction principale qui fait appel     */
/*       à d'autres fonctions et procédures pour des traitements */
/*       spécifique.                                             */
/*                                                               */
/*---------------------------------------------------------------*/ 



#include "./chaine.h"





int main()
{

  int choix, CodeLecture, taille;
  
  char ch[] = "Bonjour les ZZ1!";

  printf("Quelle question voulez-vous faire?\n");

  printf("1. Afficher et calculer la taille.\n");

  printf("2. Remplacer le 8ème caractère par le caractère de fin de chaine et faire la question précédente.Ensuite remettre ' ' et refaire le 1.\n");

  CodeLecture = scanf("%d", &choix);

  if(CodeLecture)
    {

      switch(choix)
	{
	  
	case 1:

	  AfficheChaine1(ch);

	  AfficheChaine2(ch);

	  printf("La taille de la chaine est: %d\n", TailleChaine(ch));

	  break;

	case 2:

	  taille =  TailleChaine(ch);

	  if (RemplacerCaractere(8, '\0', ch, taille))
	    {

	      AfficheChaine2(ch);

	      printf("La taille de la chaine est: %d\n", TailleChaine(ch));

	      RemplacerCaractere(8,' ', ch, taille);

	      printf("Après avoir remis espace on a:\n\n");

	      AfficheChaine2(ch);

	      printf("La taille de la chaine est: %d\n", TailleChaine(ch));

	    }
	  
	}
      
    }

   return 0;

}
