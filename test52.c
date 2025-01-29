#include<stdio.h>
int main () {
    // algorithme  qui  permet de saisir 10 entiers dans un tableau. puis compter combien y a-t-il  d'éléments pairs et  impairs
    int i,n,p=0,ip=0;
    printf("donner la taille de taleaux des entiers");
    scanf("%d",&n);
    int t[n];
    for (i=1;i<=n;i++)
    {
        printf("doner la valeur de %d pase",i);
        scanf("%d",&t[i]);
        if(t[i]%2==0)
        p++; else ip++;
    } 
    printf("%d nombre pair et %d nombre impair",p,ip);
    return 0;
}