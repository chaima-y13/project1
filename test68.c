#include<stdio.h>
struct book {
    char title [68];
    char author [59];
    float prise ;
};
int main ( ){
    // structure named book have title author and prise find the mor expensive a,d the low prise and displa the infos 
  struct book b1,b2,b3;
  printf("enter the name of the 1 book ");
  scanf("%s",&b1.title);
  printf("enter the author of this book ");
  scanf("%s",&b1.author);
  printf("enter the prise ");
  scanf("%f",&b1.prise);
  printf("enter the name of the 2 book ");
  scanf("%s",&b2.title);
  printf("enter the author of this book ");
  scanf("%s",&b2.author);
  printf("enter the prise ");
  scanf("%f",&b2.prise);
  printf("enter hte name of the 3 book ");
  scanf("%s",&b3.title);
  printf("enter the author of that book ");
  scanf("%s",b3.author);
  printf(" enter the prise ");
  scanf("%f",&b3.prise);
  printf("\n");
   if(((b1.prise > b2.prise) && (b1.prise > b3.prise))&&(b2.prise > b3.prise)) {
   printf("the prise of the first book is the most expensive\n");
   printf("title : %s",b1.title); printf("\n");
   printf("author : %s",b1.author); printf("\n");
   printf("prise : %f",b1.prise); printf("\n");
   printf("the prise of the third book is the low pise");printf("\n");
   printf(" title : %s",b3.prise); printf("\n");
   printf("author : %s",b3.author); printf("\n");
   printf("prise : %f",b3.prise);printf("\n"); }
   else if (((b1.prise > b2.prise) && (b1.prise > b3.prise))&&(b3.prise > b2.prise)) {
   printf("the prise of the first book is the most expensive\n");
   printf("title : %s",b1.title); printf("\n");
   printf("author : %s",b1.author); printf("\n");
   printf("prise : %f",b1.prise); printf("\n");
   printf("the prise of the second book is the low pise");printf("\n");
   printf(" title : %s",b2.prise); printf("\n");
   printf("author : %s",b2.author); printf("\n");
   printf("prise : %f",b2.prise);printf("\n"); }
   else if (((b2.prise > b1.prise) && (b2.prise > b3.prise))&&(b1.prise > b3.prise)) {
    printf("the prise of the second book is the most expensive\n");
   printf("title : %s",b2.title); printf("\n");
   printf("author : %s",b2.author); printf("\n");
   printf("prise : %f",b2.prise); printf("\n");
   printf("the prise of the third book is the low pise");printf("\n");
   printf(" title : %s",b3.prise); printf("\n");
   printf("author : %s",b3.author); printf("\n");
   printf("prise : %f",b3.prise);printf("\n"); }
   else if(((b2.prise > b1.prise) && (b2.prise > b3.prise))&&(b3.prise > b1.prise)) {
    printf("the prise of the second book is the most expensive\n");
    printf("title : %s",b2.title); printf("\n");
    printf("author : %s",b2.author); printf("\n");
    printf("prise : %f",b2.prise); printf("\n");
    printf("the prise of the first book is the low pise");printf("\n");
    printf(" title : %s",b1.prise); printf("\n");
    printf("author : %s",b1.author); printf("\n");
    printf("prise : %f",b1.prise);printf("\n");
   }  
   else if(((b3.prise > b1.prise) && (b3.prise > b2.prise))&&(b2.prise > b1.prise)) {
    printf("the prise of the third book is the most expensive\n");
    printf("title : %s",b3.title); printf("\n");
    printf("author : %s",b3.author); printf("\n");
    printf("prise : %f",b3.prise); printf("\n");
    printf("the prise of the first book is the low pise");printf("\n");
    printf(" title : %s",b1.prise); printf("\n");
    printf("author : %s",b1.author); printf("\n");
    printf("prise : %f",b1.prise);printf("\n");
   }
   else if (((b3.prise > b1.prise) && (b3.prise > b2.prise))&&(b1.prise > b2.prise)) {
    printf("the prise of the third book is the most expensive\n");
    printf("title : %s",b3.title); printf("\n");
    printf("author : %s",b3.author); printf("\n");
    printf("prise : %f",b3.prise); printf("\n");
    printf("the prise of the second book is the low pise");printf("\n");
    printf(" title : %s",b2.prise); printf("\n");
    printf("author : %s",b2.author); printf("\n");
    printf("prise : %f",b2.prise);printf("\n");
   }
   return 0;
}