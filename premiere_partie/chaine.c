/*---------------------------------------------------------------*/
/*                                                               */
/*                          chaine.c                             */
/* Role: Définition des procédures et fonctions liées aux        */
/*       traitement sur les chaines de caractères sur cette      */
/*       partie du tp.                                           */
/*                                                               */
/*---------------------------------------------------------------*/   



#include "./chaine.h"





/*---------------------------------------------------------------*/
/*                                                               */
/* AfficheChaine1      Affiche une chaine de caractères,         */
/*                     caractère par caractère.                  */
/*                                                               */
/* En entrée             : ch - La chaine de caractères.         */
/*                                                               */
/* En sortie             :      Rien en sortie.                  */
/*                                                               */
/* Variable(s) locale(s) : i  - Variable de boucle.              */
/*                                                               */
/*---------------------------------------------------------------*/ 


void AfficheChaine1(char * ch)
{

  int i=0;

  printf("La chaine est:\n");

  while(ch[i] != '\0')
    {

      printf("%c", ch[i]);

      ++i;

    } 

  printf("\n");

}


/*---------------------------------------------------------------*/
/*                                                               */
/* AfficheChaine2      Affiche une chaine de caractères.         */
/*                                                               */
/* En entrée             : ch - La chaine de caractères.         */
/*                                                               */
/* En sortie             :      Rien en sortie.                  */
/*                                                               */
/* Variable(s) locale(s) :      Rien en variable locale.         */
/*                                                               */
/*---------------------------------------------------------------*/ 


void AfficheChaine2(char * ch)
{

  printf("La chaine est:\n");

  printf("%s\n", ch);

}


/*---------------------------------------------------------------*/
/*                                                               */
/* TailleChaine      Calcule la taille de la chaine.             */
/*                                                               */
/* En entrée             : ch - La chaine de caractères.         */
/*                                                               */
/* En sortie             : i  - Retourne la taille               */
/*                                                               */
/* Variable(s) locale(s) : i  - Varible de boucle et contenant   */
/*                              la longeur de la chaine.         */
/*                                                               */
/*---------------------------------------------------------------*/ 



int TailleChaine(char * ch)
{

  int i = 0;

  while(ch[i] != '\0')
    {

      ++i;

    }

  return i;

}


/*---------------------------------------------------------------*/
/*                                                               */
/* RemplacerCaractere      Remplacer un caractere à une position */
/*                         donnée par un autre.                  */
/*                                                               */
/* En entrée             : position - Position du caractère à    */
/*                                    remplacer.                 */
/*                         c        - Le caractère à mettre.     */
/*                         ch       - La chaine de caractères.   */
/*                         taille   - La taille de la chaine.    */
/*                                                               */
/* En sortie             : remplacer- Retourne 1 si le           */
/*                                    remplacement c'est bien    */
/*                                    passé et 0 sinon.          */
/*                                                               */
/* Variable(s) locale(s) : remlpacer- Contient 1 si le           */
/*                                    remplacement c'est bien    */
/*                                    passé et 0 sinon.          */
/*                                                               */
/*---------------------------------------------------------------*/ 


int RemplacerCaractere(int position, char c, char * ch, int taille)
{

  int remplacer = 1;                                   /*suppose que le remplacement sera bien fait*/

  if(position <= taille)                               /*si la postion existe dans la chaine*/
    {

      ch[position - 1] = c;

    }
  else
    {

      printf("Cette position n'existe pas");

      remplacer = 0;

    }

  return remplacer;

}
