#include <stdio.h>
#include <stdlib.h>

int main()
{
   float i=0, nombre;
    double produit;
 	/*for (i; i <= nombre; i++) {
 	 	printf("The value is: %d\n",i);
 	}
 	*/
 	printf("Saisir un nombre entier:"); scanf("%d",&nombre);
 	while (i<10)
    {
        produit = nombre / i;
        printf("%.0f / %.0f = %.2f\n",nombre,i,produit);
        i++;
    }
}
