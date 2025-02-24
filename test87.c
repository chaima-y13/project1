#include<stdio.h>
int fib_rec(int n)
{ 
    if (n<=1) return n;
    else return fib_rec(n-1)+fib_rec(n-2); 
}
int main () { 
    // fibonachi terms recursive
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    printf("the %d term  of fibonachi is %d",x,fib_rec(x));
    return 0;
}