// trier un tableau avec les pointeir et aficher la resultat
#include<stdio.h>
// cette methde (iviter le maximum) 
int main () {
 int t[10],n,*p1,*p2,temp;
 printf("veuillez saisir la taille du tableau ");
 scanf("%d",&n);
 for(p1=t;p1<=t+n-1;p1++)
 {
    printf("veuillez saisir le %d elelement",p1-t);
    scanf("%d",p1);
 }
 for(p1=t,p2=p1+1;p1<=t+n-1,p2<=t+n-1;p1++,p2++)
 {
    if(*p1>*p2)
  {
    temp=*p1;
    *p1=*p2;
    *p2=temp;
  }  
 }
 for(p1=t;p1<=t+n-1;p1++)
 {
    printf("t[%d]=%d\n",p1-t,*p1);
 }


    
    return 0;

}