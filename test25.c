#include<stdio.h>
#include<math.h>
int main () {
    int a,b,c;
    float x,x1,x2,d;
    printf("veuillez saiser les coefition a,b,c");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a==0 && b!=0 && c!=0)
    {
        x=-c/b;
        printf("une seul solution x=%.2f",x);
    }
    else if( a==0 && b==0 && c!=0)
    {
        printf("imposible %d=0",c);
    }
    else if (a!=0 && b!=0 && c!=0)
    {
        d=b*b-(4*a*c);
        if(d>0) {
        x1=(-b-sqrt(d))/2*a;
        x2=(-b+sqrt(d)/2*a);
        printf("deux solusion x1=%.2f  x2=%.2f",x1,x2); }
        else if (d==0)
        {
            x=-b/2*a;
            printf(" une double solution x=",x);
        }
        else if (d<0)
        printf(" il ya pas de solution ");
    }
return 0 ;
}