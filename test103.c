#include<stdio.h>
// l'echange des element d un tableau avec les pointeurs 
int main () {
    int t[20],*p1,*p2,n,temp;
    p1=t,
    printf("donner la taille du tableau ");
    scanf("%d",&n);
    p2=t+n-1;
    for(p1=t;p1<=t+n-1;p1++)
    {
        printf("donner la phase %d",p1-t);
        scanf("%d",p1);
    }
    printf("\n-----------------------------\n");
    
    for(p1=t,p2=t+(n-1);p1<p2;p1++,p2--)

        {
       temp=*p1;
       *p1=*p2;
       *p2=temp; 
    }

    for(p1=t;p1<=t+n-1;p1++)
    {
        printf("t[%d]=%d\n",p1-t,*p1);
    }
    return 0;
}