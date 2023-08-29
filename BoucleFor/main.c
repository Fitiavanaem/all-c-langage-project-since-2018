#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,n,t[10];
     printf("\nsaisir la taille du tableau:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
        printf("\nSaisir un nombre entier:");
        scanf("%d",&t[i]);
     }
    return 0;
}
