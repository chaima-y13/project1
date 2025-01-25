#include<stdio.h>
int main ()
{
    // pair et impair
    int n;
    printf(" donner un nombre entier\t");
    scanf("%d",&n);
    if(n%2==0)
    printf(" %d est pair ",n);
    else printf(" %d est impair",n);
    return 0;
}