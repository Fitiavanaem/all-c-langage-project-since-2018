#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*fp;
    fp=fopen("fichier.txt","w");
    char elem[25];
    if(fp==NULL){
        printf("Misy error");

        exit(1);
    }
    printf("Nom:");
    scanf("%s",elem);

    fprintf(fp,"%s",elem);
    fclose(fp);
    return 0;
}
