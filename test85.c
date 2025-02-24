#include<stdio.h>
// fibonatchi normal 
int main () {
 int i,uj=0,ui=1,n,un;
  do {
 printf("enter number of term superior then 2");
scanf("%d",&n);
}
while (n<2) ;
for (i=2;i<=n;i++)
{
    un=uj+ui;
    printf("%d\t",un);
    uj=ui;
    ui=un;
}
return 0;
} 