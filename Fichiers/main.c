#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{ char nom[30],prenom[30];
  FILE*fitiavana=NULL;
  int reponse=0,age;
   printf("Bonjour!!!Veuillez patienter!!!\n");
  do{
   fflush(stdin);
   printf("\nEntrer votre Nom:");gets(nom);
   printf("Entrer votre Prenom:");gets(prenom);
   printf("Entrer votre age:");scanf("%d",&age);
   fitiavana=fopen("Enregistrement.txt","a");
   fprintf(fitiavana,"%s\n%s\n%d\n\n\n",nom,prenom,age);
   fclose(fitiavana);
   printf("\nDonnee enregistree avec succees\n");
   printf("\nVoulez-vous continuer?Oui(1) ou non(0)?:");scanf("%d",&reponse);
    }
    while(reponse==1);
    return 1;
}
