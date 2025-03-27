// factoriel avec les pointeurs 
#include<stdio.h>
int facto( int *a ) {
    int f=1,i;
    for(i=1;i<=*a;i++)
    {
        f*=i;
    }
    return f;
}
int main ( ){
 int x=3;
  int b=facto(&x);
  printf(" b= %d",b);
  return 0;
}