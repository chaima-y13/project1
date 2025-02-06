#include<stdio.h>
int main () {
    // permutation sans auxiliaire
    int a,b;
    printf("entrer a ");
    scanf("%d",&a);
    printf("entrer b ");
    scanf("%d",&b);
    a=a+b; b=a-b; a=a-b;
    printf("%d\t",a);
    printf("%d",b);
    return 0;
}