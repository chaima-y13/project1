#include<stdio.h>
int main () {
    //le nombre d'occurence
    int i,n,recherch,occ=0;
    int t[10];
    for(i=1;i<=10;i++)
    {
        printf("veuillez saiser le %d nombre ",i);
        scanf("%d",&t[i]);
    }
    printf("\n");
    printf("donner le nombre que voux recherche");
    scanf("%d",&recherch);
    for(i=1;i<=10;i++)
    {
        if(recherch==t[i])
        occ++;
    }
    printf("le nombre docurence de %d est %d ",recherch,occ);
    return 0;
}