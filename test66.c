#include<stdio.h>
struct student {
    char name[45];
    int age;
    float mark;
};
int main () {
 // struct called student with name age and total mark for two student withe the avreadj of total marks 
 float amoy;
 struct student s1; struct student s2;
 printf("veuillez entrer le nom de premier persson\t");
 scanf("%s",&s1.name);
 printf(" enter leur age\t");
 scanf("%d",&s1.age);
 printf("entrer leur moyenne\t");
 scanf("%f",&s1.mark);
 printf("veuillez entrer le nom de deusieme persson\t");
 scanf("%s",&s2.name);
 printf("entrer leur age\t");
 scanf("%d",&s2.age);
 printf(" entrer leur moyenne\t");
 scanf("%f",&s2.mark);
amoy=(s1.mark+s2.mark)/2;
printf("\n"); printf("les information de 1 personne\n");
printf("nom \t: %s",s1.name);printf("\n");
 printf("age \t: %d",s1.age);printf("\n");
  printf("moyenne \t: %f",s1.mark);
printf("\n");
 printf("les information de 2 personne \n");
printf("nom \t:%s",s2.name) ; printf("\n");
 printf("age \t: %d",s2.age); printf("\n");
 printf(" moyenne \t: %f",s2.mark);
printf("\n"); 
printf("la moyenne de deux estudiant est : %.2f",amoy);
return 0;


}