#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, cake;
  	printf("Quel age avez-vous?\n");
    scanf("%d",&age);

     if(age>=18){
        printf("Voulez-vous du cake?si Oui tapez (1) si Non (0).\n");
        scanf("%d",&cake);
      if(cake==1){
            printf("Vous allez payer 7000 ar");
        }else printf("Vous allez payer 5000 ar");

    }else{
        printf("Voulez-vous du cake?si Oui tapez (1) si Non (0).\n");
        scanf("%d",&cake);
        if(cake==1){
            printf("Vous allez payer 5000 ar");
        }else printf("Vous allez payer 3000 ar");
     }
    return 0;
}
