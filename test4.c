#include<stdio.h>
int main () {
    // code permitaion 
    int a,b,temp;
    printf(" donner un nombre a\t");
    scanf("%d",&a);
    printf(" donner un nombre b \t");
    scanf("%d",&b);
    temp=b;
    b=a;
    a=temp;
    printf("a=%d\t",a);
    printf("b=%d",b);
    return 0;

}