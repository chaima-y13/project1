#include<stdio.h>
// affecter et afficher des element dun tableau avec les pointeur 
int main () {
 int t[20],*p,n;
 p=t;
 printf("veuillez saisir la taille du tableau\t");
 scanf("%d",&n);
 for(p=t;p<=t+n-1;p++)
 {
  printf("veuillez saisir la valeur de %d phase\t",p-t);
  scanf("%d",p);
 }
 printf("\n-------------------------------------\n");
 for(p=t;p<=t+n-1;p++){
  printf("t[%d]=%d\n",p-t,*p);
 }
 return 0;
}