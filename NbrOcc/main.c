#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n, t[100],m=0,x;
    printf("\nSaisir la taille du tableau:");
    scanf("%d",&n);
    for(i=0;i<n; i++)
    {
        printf("Entrer les element N%d=",i+1);
        scanf("%d",&t[i]);
    }
    printf("\nEntrer la valeur que vous chercher:");
    scanf("%d",&x);
    for(i=0;i<n; i++)
    {
     if(t[i]==x)
        {
         m=m+1;
        }
    }
     if(m!=NULL)
     {
         printf("\nle nombre d'occurence de valeur:%d = %d",x,m);
     }
     else
     {
         printf("\nla valeur n'exite pas.");
     }

    return 0;
}
