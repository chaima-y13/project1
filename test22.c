#include<stdio.h>
int main () {
    // esque n est un multiple de x 
    int n,x;
    printf("donner un nombre n");
    scanf("%d",&n);
    printf("donner un nombre x");
    scanf("%d",&x);
    if(n%x==0)
    printf("%d est multiple de %d",n,x);
    else printf("%d n est pas un multiple de %d",n,x);
    return 0;
}