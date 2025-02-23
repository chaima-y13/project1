#include<stdio.h>
int fib_it(int n)
{
    int i,uj=0,ui=1,un;
    for (i=2;i<=n;i++)
    {
        un=uj+ui;
        uj=ui;
        ui=un;
    }
    return un;
}
int main () {
    //  fibonatchi foncton itireative 
    int n;
    do 
    {
        printf("enter a number superior then 2");
        scanf("%d",&n);
    } while (n<2) ;
    printf(" the last term of fibonatchi is %d",fib_it(n));
    return 0;
}