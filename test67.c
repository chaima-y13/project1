#include<stdio.h>
#include<math.h>
struct circle {
     float radius;
};
int main () {
    // te area and the parameter of two circles 
    float p,s;
    struct circle c1; struct circle c2 ;
    printf("enter the radiuis of the first circle");
    scanf("%f",&c1.radius);
  s=(3.14)*pow(c1.radius,2);
  p=2*(3.14)*c1.radius;
  printf("the area of the first circle is : %.2f",s); printf("\n");
  printf("the peremeter of the first circle is : %.2f",p);
  printf("\n");
  printf("enter the radius of the seconf circle ");
  scanf("%f",&c2.radius);
  s=(3.14)*pow(c2.radius,2);
  p=2*(3.14)*c2.radius;
  printf("the area of the first circle is : %.2f",s); printf("\n");
  printf("the peremeter of the first circle is : %.2f",p);
  return 0;
}