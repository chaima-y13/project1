#include<stdio.h>
#include<math.h>
int main () {
    // la puissance d un nombre 
    int x, p;
    printf("doner le nombre");
    scanf("%d",&x);
    printf("donner la puissance");
    scanf("%d",&p);
    x=pow(x,p);
    printf(" x= %d",x);
    return 0;
}