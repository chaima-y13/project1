// foction de calculer la somme de caree de deux entiers
#include<stdio.h>
#include<math.h>
int scaree(int x,int y)
{ int s;
    s=pow(x,2)+pow(y,2);
    return s;
}
int main () {
    int a,b;
    printf("enter deux entiers");
    scanf("%d   %d",&a,&b);
    printf("la somme de caree de %d et %d est %d ",a,b,scaree(a,b));
    return 0;
} 