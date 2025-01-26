#include<stdio.h>
#include<math.h>
int main () {
    // mentiont d'une moyenne
    float m;
    do 
    {
        printf("donner la moyenne");
        scanf("%f",&m);
    } 
    while(m<0 || m>20);
    if(m<10)
    printf("ajourne");
    else if (m>=10 && m<12)
    printf("passable" );
    else if(m>=12 && m<14)
    printf("assez bien");
    else if (m>= 14 && m<16)
    printf("bien");
    else if(m>= 16 && m<18)
    printf("tres bien");
    else printf(" exelent");
    return 0;


}