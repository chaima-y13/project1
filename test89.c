#include<stdio.h>
int sumarr( int t[], int n )
{ 
    if (n==0) return 0;
    else return sumarr(t,n-1)+t[n-1];
}
int main () {
    // fonction d addition des element d un tableau 
    int i;
   int t[5];
  for(i=0;i<5;i++)
  {
    printf("enter the %d phase",i+1);
    scanf("%d",&t[i]);
  }
  printf("the sum of all element of array is %d ",sumarr(t,5));
  return 0 ;
}