#include<stdio.h>
int main () {
    //Ecrire un algorithme qui permet d'afficher  un  triangle  d'entiers 
    int i,j,n;
    printf("donner un nombre n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d\t",i);
            
        }
        printf("\n");
    }
    return 0;
}