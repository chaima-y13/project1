#include<stdio.h>
int main () {
    // creature d un tableaux apr affichage avec orodre 
int j,i,x,t[10];
for(i=1;i<=10;i++)
{
    printf("donner la valeur de %d phase",i);
    scanf("%d",&t[i]);
}
for(i=1;i<=10;i++)
{
    for(j=1;j<=10;j++)
    {
        if(t[i]<=t[j])
        {
           x=t[i];
           t[i]=t[j];
           t[j]=x;
        }

    }
}
for(i=1;i<=10;i++)
{
    printf("t[%d]=%d\n",i,t[i]);
}
return 0;

}