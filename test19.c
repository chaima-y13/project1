#include<stdio.h>
#include<math.h>
int main () {
    // la signe d addition 
    int a,b;
    printf("donner un nombre ");
    scanf("%d",&a);
    printf("donner un nombre ");
    scanf("%d",&b);
    if(a>0 && b>0)
    printf("l addition est positiv");
    else if ((a>0 && b<0) && (abs(a)>abs(b)) || ((a<0 && b>0) && (abs(b)>abs(a))) )
    printf("l addition est positiv");
    else if (a<0 && b<0)
    printf("l addition est negative");
    else if (((a>0 && b<0)&&(abs(b)>abs(a))) || ( (a<0 && b>0)&& (abs(a)>abs(b))) )
    printf("l addition est negativ");
    return 0;
    
    
}