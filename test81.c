#include<stdio.h>
void num_interval(int x, int y)
{
    int i,temp;
    if(x>y)
    { temp=x;
        x=y;
        y=temp;
    }
   for (i=x;i<=y;i++)
   {
      printf("%d\t",i);
   } 
}
int main () {
    //fonction qui donne tout les nombre entre deux nombre (interval)
    int a,b;
    printf("veuillez entrer deux nombre ");
    scanf("%d  %d",&a, &b);
    num_interval(a,b);
}