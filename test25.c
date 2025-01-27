#include<stdio.h>
#include<math.h>
int main () {
    // calculation le rest et le quotient de divition entiere avec la soustraction succssecive
    int divd,div,rest,quo=0,i;
    printf("vueillez saiser le dividende");
    scanf("%d",&divd);
    printf("veuillez saiser le diviseur");
    scanf("%d",&div);
    for (i=divd;i>=div;i-=div)
    {
        quo+=1;
        rest=i-div;
    }
    printf("le quotient :%d et le rest :%d",quo,rest);
    return 0;
}