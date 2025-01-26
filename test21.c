#include<stdio.h>
int main () {
 char ltr ;
 printf("ecrire un lettre ");
 scanf("%c",&ltr);
 if((ltr=='a') || (ltr=='e') || (ltr=='i') || (ltr=='o') || (ltr=='u')||(ltr=='y'))
 printf("lettre est un voyelle");
 else 
 printf(" lettre est un consonne");
 return 0;
}