#include<stdio.h>
int main ( ){
    //la deference de la somme des paires et la somme d impaires 
    int i,n,sp=0,sn=0,s;
    printf(" donner la taille de tableau ");
    scanf(" %d",&n); int t[n]; 
    for(i=1;i<=n;i++)
    {
        printf(" veuillez saiser la valeur de la %d phase ",i);
        scanf("%d",&t[i]);
        if(t[i]%2==0)
        sp+=t[i]; else sn+=t[i];
    }
    s=sp-sn;
    printf("le deferent : %d",s);
    return 0;
}