// fonction de verification si un nombre est pair ou impaire
int pairip(int *a )
{
     if (*a %2 == 0) 
     return 1 ;
     else return 0;
}
#include<stdio.h>
int main ( ){
    int a,p_a=&a;
    printf("enter a number ");
    scanf("%d",&a);
    printf(" %d ",pairip(p_a));
    // je peux la faire tout simplement sans fonction 
    // int a,p_a=&a
    // printf("enter a number"); scanf("%d",p_a);
    // if (*p_a%2==0) printf("pair "); 
    // else printf("impair");
    return 0 ;
}