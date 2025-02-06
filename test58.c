#include<stdio.h>
#include<math.h>
int main () {
    //x reel et n entier la puissansedu x avec n
    int n;  float x,p;
    printf(" veuillez saiser un nombre ");
scanf(" %f",&x);
printf("veuillez saiser la puissance ");
scanf("%d",&n);
p=pow(x,n);
printf("la puissance de %f a %d est :%.2f",x,n,p);
return 0;

}