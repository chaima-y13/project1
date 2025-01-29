#include<stdio.h>
int main () {
    //inverse d un entier n
    int i,n,r=0;
    printf("donner un nombre ");
    scanf("%d",&n);
    while(n>0)
    { r=r*10;
    r=r+n%10;
    n=n/10;
    }
    printf("l inverse est :%d",r);
    return 0;
}