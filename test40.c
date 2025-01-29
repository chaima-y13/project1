#include<stdio.h>
int main () {
    // algo qui permet de stocker 10 entier dans un tableau
    int i; int tab[10];
 for(i=1;i<=10;i++)
 {
    printf("donner la valeur de %d selul\t",i);
    scanf("%d",&tab[i]);
 }
 printf("stop de saiser ");
 return 0;
}