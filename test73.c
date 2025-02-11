#include<stdio.h>
#include<stdlib.h>
int minimum(int x,int y) {
    int min;
    if (x<y)  min =x;
    else if (x<y) min =y;
    return min; 
};
int main ( ){
    // fonction le minimum des deus entiers
 int a,b;
 printf("donner la valeur de a et b");
 scanf("%d %d",&a,&b);
 printf("le minimum est %d ",minimum(a,b));
    return 0;
}