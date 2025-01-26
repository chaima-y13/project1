#include<stdio.h>
#include<math.h>
int main () { 
    //somme des carre
    int s,n,i;
    printf("donner le nombre des entiers  ");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
    {
        s=s+pow(i,2);
        if(i!=n)
        printf("%d^2 +",i);
        else printf("%d^2",i);
    }
    printf("=%d",s);
}