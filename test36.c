#include<stdio.h>
int main () {
    // categore d age
 int age;
 do {
 printf(" quell est l age de cet enfant");
 scanf("%d",&age);
 } while (age<0);
if(age<=7)
printf("pussin");
else if (age>7 && age <=9)
printf("pupille");
else if (age>9 && age <=11)
printf("minime");
else
printf("cadet");
return 0;
 
}