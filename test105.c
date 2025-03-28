#include<stdio.h>
// procedure qui inverste tableau de 100 entier en esseyer avec 4 seulement
void  itab(int t[],int n)
{  int temp,i;
    for(i=1;i<=n;i++)
    {
        printf("donner la phase %d",i);
        scanf("%d",&t[i]);
    }
    for(i=1;i<=n/2;i++)
    {
       temp=t[i];
       t[i]=t[n-i+1];
       t[n-i+1]=temp;
    }
    for(i=1;i<=n;i++)
    {
        printf("t[%d]=%d\n",i,t[i]);
    }
}  
int main () {
    int n,i;
    printf("donner la taille du tableau");
    scanf("%d",&n);
    int t[n];
    
    itab(t[n],n);
    return 0;

}