#include<stdio.h>
struct employee {
    int id;
    char name [40];
    float slr;
};
int main ( ){
    //struct called employee to stor info : employer id and name salary 
struct employee t[10];int i,c=1;
for (i=1;i<=10;i++) 
{
    printf("enter the id of the %d person",i);
    scanf("%d",&t[i].id);
    printf("enter the name of the %d person ",i);
    scanf("%s",&t[i].name);
    printf("enter the salary of the %d person ",i);
    scanf("%f",&t[i].slr);
}
float max=t[1].slr;
 for(i=2;i<=10;i++)
 {
    if(max<t[i].slr) {
    max=t[i].slr;
    c=i;}
 }
 printf("the hightest salary employee is : \n");
 printf("  id : %d ",t[c].id); printf("\n");
 printf(" name : %s",t[c].name);
 printf(" salary : %f",&max);
 return 0;
}