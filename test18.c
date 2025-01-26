#include<stdio.h>
int main () {
    // la valeur absolu
    int n;
    printf(" donner un nombre ");
    scanf("%d",&n);
    if(n<0) {
    n=n*(-1);
    printf(" la valeur absolu de cet nombre est : %d",n);
    }
    else 
    printf("la valeur absolu de cet nombre est : %d",n);
    return 0;
}