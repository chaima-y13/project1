#include<stdio.h>
// si a et b sont la meme sign fair lechange sinon a est resoit a+b et b respoit b*a
void change(int *a , int *b)
{ int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int plus(int *a ,int *b)
{
    printf("%d  %d\n",*a,*b);
    *a=(*a)+ (*b);
    return *a;
}
int prdc(int *a ,int *b)
{
    printf("%d  %d\n",*a,*b);
    *b=(*a) * (*b);
    return *b;
}
int main () {
    int a;
    int b;
    int *p_a=&a;
    int *p_b=&b;
    printf("enter two numbers\n");
    printf("A= ");
   scanf("%d",&a);
   printf("B= ");
   scanf("%d",&b);
   if ((a<0 && b<0) || (a>0 && b>0) )
   {
     change(p_a,p_b);
     printf("A= %d   B= %d",*p_a,*p_b);
   }
   else 
   {

    int A = plus(p_a, p_b);
    int B = prdc(p_a, p_b);
    printf("A= %d  B= %d ",  A, B);
   }
   return 0;
}
