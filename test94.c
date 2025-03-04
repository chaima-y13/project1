#include<stdio.h>
int main ( ){ 
    // afficher les diviseur d un entier positif n non nul
    int a,i;
    int *p1=&a;
   
 do {
    printf("enter a number ");
    scanf("%d",&a);
 }
 while (*p1<0) ;
 printf("les deviseurs de %d :",*p1);
 for (i=1;i<=*p1;i++){
    if (*p1%i==0)
    printf("%d ",i);
 }
 return 0;
}