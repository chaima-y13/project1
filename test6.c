#include<stdio.h>
int main () {
    // addition of 4 numbre with two variable  without loup
    int s,x;
    printf(" donner le 1 nombre");
    scanf("%d",&x);
    s=x;
    printf("donner le 2 nombre");
    scanf("%d",&x);
    s=s+x;
    printf("donner le 3 nombre");
    scanf("%d",&x);
    s=s+x;
    printf(" doner le 4 nombre");
    scanf("%d",&x);
    s=s+x;
    printf("la somme = %d",s);

    return 0;
}