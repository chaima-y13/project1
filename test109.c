#include<stdio.h>
// trier un tableau sans les pointeurs 
int main ( ){
int n,i,j;
int temp;
printf("veuillez saisir la taille du tabaleau ");
scanf("%d",&n);
int t[100];
for (i = 0; i < n; i++)
{
    printf("t[%d]=",i);
    scanf("%d",&t[i]);
}
for(i=0;i<n-i-1;i++) {
for(j=0;j<n-i-1;j++)

{
    if(t[j]>t[j+1])
    { 
        temp=t[j];
        t[j]=t[j+1];
        t[j+1]=temp;
    }
}
}
printf("\n-----------------------------\n");
for (i = 0; i < n; i++)

{
    printf("t[%d]=%d\n",i,t[i]);
}
return 0;
}
