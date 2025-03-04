 //fonction de permuer deu nombre avec les pointeur passage d'adress
 int change(int *a , int *b)
 {
    int temp ;
    temp=*a;
    *a=*b;
    *b=temp;
 } 
#include<stdio.h>
int main ()
{
   int a,b,*p_a=&a,*p_b=&b;
   printf("A= ");
   scanf("%d",&a);
   printf("B= ");
   scanf("%d ",&b);
   change(p_a,p_b);
   printf("******************\n");
   printf("A= %d  B=%d",*p_a,*p_b);
   return 0;
}