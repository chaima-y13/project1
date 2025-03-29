#include<stdio.h>
// deux T(a et b) avec dimention n et m qui ajouter les eslslement de b a la fin de a avec ds pointeurs pa et pb , aficher la resultat a 
int main ( ){
   int a[20] ,b[20],n,m,*pa,*pb;
   pa=a,pb=b;
   printf("veuillez saisir la taille du tableau A\t");
   scanf("%d",&n);
   printf("veuillez saisir les elelment du tableau A\n");
  for(pa=a;pa<=a+n-1;pa++)
  {
    printf("A[%d]=\t",pa-a);
    scanf("%d",pa);
  }
  printf("\n------------------------------\n");
  printf("veuillez saisir la taille du tableau B\t");
   scanf("%d",&m);
   printf("veuillez saisir les elelment du tableau A\n");
  for(pb=b;pb<=b+m-1;pb++)
  {
    printf("B[%d]=\t",pb-b);
    scanf("%d",pb);
  }
  for(pa=a+n,pb=b;pb<b+m;pa++,pb++)
  {
    *pa=*pb;
  }
  n=n+m;
  printf("les elelement du tableau A sont : \n");
  for(pa=a;pa<=n+a-1;pa++)
  {
    printf("t[%d]=%d\n",pa-a,*pa);
  }
  return 0;
}