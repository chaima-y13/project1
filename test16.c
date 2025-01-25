#include<stdio.h>
int main () {
    // la signe de produit
    int a,b,p;
    printf("donner un nombre");
    scanf("%d",&a);
    printf(" donner un nombre ");
    scanf("%d",&b);
    if((a<0 && b<00) || (a>0 && b>0))
    printf("le produit est positive");
    else if ( (a>0 && b<0) || (a<0 && b>0) )
    printf("le produit est negative");
    else printf("le produit est nul");
    return 0;
}