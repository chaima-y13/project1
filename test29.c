#include<stdio.h>
#include<math.h>
int main () { 
    //somme d inverse du carre
    int n,i;
    float s;
    printf(" donner le nombre des enties");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
    {
        s=s+1/pow(i,2);
        if(i!=n)
        printf("1/%d^2 +",i);
        else printf("1/%d^2",i);
    }
    printf("=%.2f",s);
    return 0;
}