// la surface dun trapeze
#include<stdio.h>
float strapeze(float gb,float pb,float h)
{
    float sur;
    sur=(gb+pb)*h/2;
    return sur;
}
int main () {
    float Gb,Pb,H;
    printf("entrer la grand base de la trapeze\n");
        scanf("%f",&Gb);
        printf("entret la petite base\n");
        scanf("%f",&Pb);
        printf("entrer la hauteur \n");
        scanf("%f",&H);
        printf("la surface de la trapeze est %.2f\n",strapeze(Gb,Pb,H));
        return 0;
}