#include<stdio.h>
int main () {
    // multiplication of two numbers with one variable
    int m,x;
    printf(" donner le 1 nombre");
    scanf("%d",&x);
    m=x;
    printf("donner le 2 nombre ");
    scanf("%d",&x);
    m=m*x;
    printf("le produit est : %d",m);
    return 0;

}