#include<stdio.h>
int main (){
    // calculer le nombre de chifrs d un entier
    int i,ch,n;
    printf("donner un numbre");
    scanf("%d",&n);
    i=1;
    while (n/10!=0)
    { n/=10;
    i++;
    }
    printf(" le nombre de chiffre d un entier : %d",i);
    
   return 0;
}