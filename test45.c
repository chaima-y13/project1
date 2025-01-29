#include<stdio.h>
int main () {
    // factoriel de 7
    int i,f=1;
    printf("factoriel de 7\n");
    for (i=1;i<=7;i++)
    {
        f=f*i;
    }
    printf("le factoriel de 7 est : %d",f);
    return 0;


}