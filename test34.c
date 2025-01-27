#include<stdio.h>
int main () {
    // calculation de la somme de la serie harmonique
    int n,i;
    float s;
    printf(" donner un nomre ");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
    {
        s=s+1/(float)i;

    }
    printf("la somme : %.2f",s);
    return 0;
}