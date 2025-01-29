#include<stdio.h>
int main () {
    //afichage de nombres impair
    int i=1,n;
    printf("donner un nombre ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
       { printf("%d\n",i); }
       i++;

    }
    return 0;
}