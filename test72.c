#include<stdio.h>
    // les fonctions la somme des troix factoriel 
    int fact(int n) {
        int i,f=1;
        for(i=2;i<=n;i++)
        {
            f=f*i;
        }
        return f;
    }
    int main () {
    int a,b,c;
    float exp;
    printf("enter the first number ");
    scanf("%d",&a);
    printf(" enter the second number");
    scanf("%d",&b);
    printf("enter the third number");
    scanf("%d",&c);
    exp=fact(a)+fact(b)+fact(c);
    printf("exp=%f",exp);
    return 0 ;
    

}