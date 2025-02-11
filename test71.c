#include<stdio.h>
struct car {
    int id ;
    char model [50];
    float rpd;
};
int main () {
    //struct called car to store id model rental rate per day 
 struct car t[5]; int i; int day,p;
 for (i=1;i<=5;i++)
 {
    printf("enter the id of the %d car",i);
    scanf("%d",&t[i].id);
    printf("enter the model name ");
    scanf("%s",&t[i].model);
    printf("enter the rental rate per day ");
    scanf("%f",&t[i].rpd);
 }
 printf("enter the days number to know the prise ");
 scanf("%d",day);
  for(i=1;i<=5;i++)
  {
    p=t[i].rpd*day;
    printf("the total retal of the %d car is : %f",i,p);
  }
  return 0;
}
