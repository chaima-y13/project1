#include<stdio.h>
int factrec(int nbr)
{ int f=1;
    if (nbr==1 )
    { return 1;}
    else if (nbr >1 )
    {
        f=nbr*factrec(nbr-1);
    } 
    return f;
}
int main (  ){
    //factoriel recurcive
int n;
printf("enter a number ");
scanf("%d",&n);
printf(" the factor of %d is %d ",n,factrec(n));
return 0;
}