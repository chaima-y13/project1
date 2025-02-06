#include<stdio.h>
int main () {
    // est ce que les nmbre sont consecutives 
    int i,n,j, e=0;
    printf("donner la taille de tableau ");
    scanf("%d",&n);
    int t[n];
    for (i=1;i<=n;i++)
    {
        printf(" donner la valeur de %d phase ",i);
        scanf("%d",&t[i]);
    }
    for(i=1;i<n;i++)
    {
        for (j=2;j<=n;j++)
        {
            if(t[i]<t[j])
            e=0; else e=1;
        }
    }
    if(e==0)
    printf("ces nombres sont consecutives ");
    else printf(" non ne son pas consecutives ");
    return 0;
}