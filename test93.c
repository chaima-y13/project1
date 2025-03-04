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
    return 0 ;
}