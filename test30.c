#include<stdio.h>
#include<math.h>
int main () { 
    //la somme des cubes
    int n,i,s;
    printf("donner le nombre des cubes");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
    {
        s=s+pow(i,3);
        if(i!=n)
        printf("%d^3 +",i);
        else printf("%d^3",i);
    }
    printf("=%d",s);
    return 0;
}