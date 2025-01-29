#include<stdio.h>
int main () {
    //la moyenne des 10 note 
    int i,s=0,n;int t[10];
    float m;
    for (i=1;i<=10;i++)
    {
        printf("donner la %d note",i);
        scanf("%d",&t[i]);
        s=s+t[i];
    }
    m=s/10;
    printf("la moyenne est : %.2f",m);
    return 0;
}