#include<stdio.h>
int main () {
    // code de moyenne de 3 module avec coiefiiton 
    int a,b,c,s1;
    float x,y,z,s,m;
    printf(" donner la note de premier module");
    scanf("%f",&x);
    printf("donner le coiefition de cet module");
    scanf("%d",&a);
    printf("donner la note de deusieum module ");
    scanf("%f",&y);
    printf("donner leur coiefition");
    scanf("%d",&b);
    printf("donner la note de troisieum module ");
    scanf("%f",&z);
    printf(" leur coiefition");
    scanf("%d",&c);
    s1=a+b+c;
s=x*a+y*b+z*c;

m= s/s1;
printf(" la moyenne est : %2.f",m);
return 0;
}