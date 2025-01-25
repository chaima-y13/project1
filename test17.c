#include<stdio.h>
int main () {
    // afficher le plus grand nombre de troix entiers 
    int a,b,c;
    printf(" donner le nombre a");
    scanf("%d",&a);
    printf(" donner le nombre b");
    scanf("%d",&b);
    printf(" donner le nombre c");
    scanf("%d",&c);
    if ( a>b && a<c)
     printf("%d est le plus grand",a);
     else if ( b>a && b>c )
     printf("%d est le plus grand ",b);
     else if (c>a && c>b)
     printf("%d est le plus grand",c);
     return 0;
    
}