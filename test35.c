#include<stdio.h>
int main () {
    // le pgcd
    int i,n,pgcd,n2;
    printf("donner le premier nombre ");
    scanf("%d",&n);
    printf("donner un notre nombre ");
    scanf("%d",&n2);
    for (i=1;i<=n;i++)
    {
        if(n%i==0 && n2%i==0)
        pgcd=i;
    }
    printf(" le pgcd est :%d",pgcd);
    return 0;
}