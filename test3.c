#include<stdio.h>
int main () {
    // code divition 
    int x,y,q,r;
 printf("veuillez saiser le dividende\t");
 scanf("%d",&x);
 printf(" vuillez saiser le diviseur\t");
 scanf("%d",&y);
 q=x/y;
 r=x%y;
 printf(" le quotient est :%d\n",q);
 printf("le rest est :%d\n",r);
 return 0;
}