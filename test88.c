#include<stdio.h>
int pown(int x,int y)
{
    if (y==0) return 1;
  else return x*pown(x,y-1);
}
int main () {
    // fonction  about power of any number using recursion 
    int a,b;
    do { 
    printf("enter the first number ");
    scanf("%d",&a);
    }  while (a<0) ;
    do { 
      printf("enter the second number ");
      scanf("%d",&b);
      }  while (b<0);
    printf("%d power %d = %d ",a,b,pown(a,b));
    return 0;
}