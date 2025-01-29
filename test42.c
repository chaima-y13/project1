#include<stdio.h>
int main () {
    // algo qui lit de saiser 1à entier et aficher le max;
    int i; int t[10]; int max;
    printf("donner la note de 1 etudiant");
    scanf("%d",&t[1]);
    max=t[1];
    for(i=2;i<=10;i++)
    {
        printf(" donner la note de %d etudiant",i);
        scanf("%d",&t[i]);
    }
    for(i=1;i<=10;i++)
    {
        if(max<t[i])
        max=t[i];
    }
    printf(" le maximum note est : %d",max);
    return 0;
    
}