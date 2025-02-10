#include<stdio.h>
struct complex {
     int reel;
     int imag;
};
int main () {
    // struct called complex real part and imaginary part , multiply of two complex number 
 struct complex c1,c2;
 int pr,pi,p;
 printf("enter the reel part of the first complex number\t ");
 scanf("%d",&c1.reel);
 printf("enter the imaginary part of the first complex number \t");
 scanf("%d",&c1.imag);
 printf("enter the reel part of the second complex number\t");
 scanf("%d",&c2.reel);
 printf("enter the imaginary of the second complex number\t ");
 scanf("%d",&c2.imag);
 pr=c1.reel*c2.reel;
 pi=c1.imag*c2.imag;
 p=pr-pi; printf("\n");
 printf("(%d+%di)*(%d+%di)=%d",c1.reel,c1.imag,c2.reel,c2.imag,p);
 return 0;

}