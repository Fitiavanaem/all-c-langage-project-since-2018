#include <stdio.h>
#include <stdlib.h>

int main()
{char nom[25];
 int annee,naissance,age;
printf("\nQuel est votre nom?:");scanf("%s",nom);
printf("\nA quelle annee sommes nous?:");scanf("%d",&annee);
printf("\nQuelle est votre annee de naissance?:");scanf("%d",&naissance);
age=annee-naissance;
printf("\nBonjour %s! Vous avez %d ans.\n",nom,age);

return 0;
}
