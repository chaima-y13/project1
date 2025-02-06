#include<stdio.h>
int main () {
    // permutation de 3 variable a form croissant
  int i,a,b,n,c;
 printf("entrer le 1 entier");
 scanf("%d",&a);
 printf("entrer le 2 entier");
 scanf("%d",&b);
printf("entrer le 3 entier");
 scanf("%d",&c);
 if(a>b) {n=a; a=b; b=n;  }
 if(a<c) { n=a ; a=c ;c=n ;}
 if(b<c) { n=b ; b=c ; n=b; }
 printf("le contenu de A est:%d\n",a);
 printf("le contenu de B est:%d\n",b);
 printf("le contenu de C est:%d",c);
 return 0 ;   

}