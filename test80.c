// foction to  calcule the area and perimeter of  a circle
#include<stdio.h>
#include<math.h>
float cirs(float r)
{ float p,s;
    
    s=3.14*pow(r,2);
  return s ; 
}
float cirp(float r)
{
  float p;
  p=2*3.14*r;
  return p;
}
int main () {
 float ra;
 printf("enter the radius of the circle ");
 scanf("%f",&ra);
 printf("the surface of the circle %f",cirs(ra));
 printf("the peremeter of the circle %f",cirp(ra));
 return 0;
}