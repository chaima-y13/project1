#include<stdio.h>
#include<math.h>
int main () { 
    //la somme des valeur absolu des entiers entre deux entiers
    int n1,n2,i,s,temp;
    printf("donner un nombre ");
    scanf("%d",&n1);
    printf(" donner un notre nombre ");
    scanf("%d",&n2);
    if(n1>n2)
    { temp=n1;
    n1=n2;
    n2=temp;
    } s=0;
      for (i=n1;i<=n2;i++)
      {
         s=s+abs(i);
         if(i!=n2)
         printf("%d+",i);
         else printf("%d",i);
      }
      printf("=%d",s);
      return 0;
}