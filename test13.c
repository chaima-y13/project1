#include<stdio.h>
int main() {
    // convertir du temp donner
    int s,m,h;
    printf(" donner le temp au second");
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    s=(s%3600)%60;
    
    printf("h= %d   m=%d   s=%d",h,m,s);
    return 0;
}