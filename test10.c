#include<stdio.h>
int main () {
    //l'inverse dun nombre de 5 chiffre
    int n,r=0; 
    printf(" donner un nombre de 5 chiffre");
    scanf("%d",&n);
    r=r+(n%10)*10000;
    n=n/10;
    r=r+(n%10)*1000;
    n=n/10;
    r=r+(n%10)*100;
    n=n/10;
    r=r+(n%10)*10;
    n=n/10;
    r=r+(n%10);
    printf(" linverse de cet nmbre est : %d",r);
    return 0;
    
}