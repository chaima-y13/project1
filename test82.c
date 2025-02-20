#include<stdio.h>
void swpnum(int x,int y)
{  int temp ;
    temp=x;
    x=y;
    y=temp;
    printf("x= %d  y= %d",x,y);
}
int main () {
    // swap two numbers 
    int a,b ;
    printf("enter two number to swap ");
    scanf("%d  %d",&a,&b);
    swpnum(a,b);
    return 0;
}