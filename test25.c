#include<stdio.h>
int main () {
    // la somme des premiers entiers dun entier 
    int n,i,s;
    printf("donner un nombre \t");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf(" la somme des premiers entiers d un entier est : %d",s);
printf("\n");
    // la somme des entiers d un entier avec notre façon decriture
    printf("donner un nombre ");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i;
        if(i!=n)
        printf("%d+",i);
        else
        printf("%d",i);
    }
    printf("=%d",s);
    return 0;
}