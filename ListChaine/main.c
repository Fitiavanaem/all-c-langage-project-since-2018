#include <stdio.h>
#include <stdlib.h>
struct cellule{
        char info ;
        struct*suivant;
        }
    typedef struct cellule*pointeur;
    pointeur creeL(int);
    void afficheL(pointeur);

int main()
{ pointeur liste;
int taille;
    printf("Saisir la taille du liste:\n");
    scanf("%d",&taille);
    liste=creeL(taille);
    afficheL(liste);
    return 0;
}
pointeur creeL(int nb)
{

    int i;
    char val;
    pointeur l,p;
    i=0; l=NULL;
    while(i<=nb){
        p=(pointeur)malloc(sizeof(struct cellule))
        printf("Valeur");scanf("%c",&val);
        p->info=val;
        l=p;i++;

             }
return l;
    }
void afficheL(pointeur){
    while(l!=NULL)
    {

    printf("%c",l->info);
    l=l->suivant;
    }


}
