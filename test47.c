#include<stdio.h>
int main () {
    // un algorithme qui permet de calculer la somme d'entiers  impaires de 1 jusqu'à un entier N
    int i,n,s;
    printf("donner un nombre ");
    scanf("%d",&n);
    s=0;
    for (i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            s+=i;
        }
    }
    printf("la somme des nombre de impair est :%d",s);
    return 0;
}