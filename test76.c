// procedure de permutation de deux variables
#include<stdio.h>
void permut(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;  
    printf("x=%d x=%d",x,y);
}
int main () {
 int x,y;
 printf("donner deux entier ");
 scanf("%d  %d",&x,&y);
 permut(x,y);
 return 0;
}