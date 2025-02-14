// foction pour calculer une expression 
#include<stdio.h>
int fact(int x)
{
    int i,f=1;
 for(i=1;i<=x;i++)
 {
    f=f*i;
    return f;
}
}
float expression(int n)
{
    int i,s=0;float som=0;
    for(i=1;i<=n;i++)
    {
    s=s+i;
    som=som+s/fact(i);
    }
    return som;

}
int main () {
    int n;
    printf("entRer une valeur ");
    scanf("%d",&n);
    printf("la somme des terms de la serie est  %.2f",expression(n));
    return 0;
}