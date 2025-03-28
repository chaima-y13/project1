#include<stdio.h>
int main () {
    int t[20],n,x,*p1,*p2;
    p1=t;
    printf("donner la taille du tableau ");
    scanf("%d",&n);
    for (p1=t;p1<=t+n-1;p1++)
{
    printf("donner la phase %d \t",p1-t);
    scanf("%d",p1);
}

printf("donner la valeur du x a elemener du tableau  ");
    scanf("%d",&x);
    p2=t;
    for(p1=t;p2<=n+t-1;p1++)
    {
        *p2=*p1;
        if(*p2!=x)
        p2++;
    }
    n=p2-t;
    printf("\n-------------------------\n");
    for(p1=t;p1<t+n-1;p1++)
    {
        printf("t[%d]=%d\n",p1-t,*p1);
    }
    return 0;
}