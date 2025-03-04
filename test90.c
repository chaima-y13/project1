// les pointeur kifech nkhdem bb pointeur 1 er exemple 
#include<stdio.h>
void plus_1(int *a , int *b)
{
    *a=*a+1;
    *b=*b+1;
}
int main () {
    int a,b,*p_a=&a,*p_b=&b;
    printf("enter the values of \n");
    printf("A= ");
    scanf("%d",&a);
    printf("B= ");
    scanf("%d",&b);
    plus_1(p_a,p_b);
    printf("****************************************\n");
  printf("A=%d    B=%d",*p_a,*p_b);
  return 0;

}