#include<stdio.h>
// procedure de somme de tput les entiers entre deux entiers et n<m si linverse signal un erreur 
void summ(int n,int m) {
    int s=0,i;
  if (n>m)
  printf("erreur");
  else  {
  for (i=n;i<=m;i++)
  {
     s=s+i;
  }
  printf("la somme est %d",s);
}
}


int main ( ){
 int a,b;
 printf("donner a et b et a < b\n");
 scanf("%d\n   %d",&a,&b);
 summ(a,b);
 return 0; 
}