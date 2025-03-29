#include<stdio.h>
// verification de tableau ( trier ou pas trier) version simple
int main () {
    int t[100],i,n;
    printf("la taille\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);
    }
    int e=0;
    for(i=0;i<n-1;i++)
    {
        if(t[i]>t[i+1])
        e=1;
        
    }
 if(e==1)
 printf("n'est pas trier ");
 else printf("trier");
 return 0;

}