// la defference d etulisation des pointeur (education)
#include<stdio.h>
int main ( ){
int a=10; int *p=&a;
printf("la valeur de a : %d\n ",a);
printf("la valeur de a : %d\n",*p);
printf("\n----------------------------------\n");
printf("l'adress de a : %d\n",p);
printf("l'adress de a : %d\n",&a);
return 0;
}