// la somme la divition le produit la deferrence des deux reels 
#include<stdio.h>
float oper(float *a,float *b)
{  float p;
    p=*a * *b;
    return p ;
}
int main () {
    float a,b,*p_a=&a,*p_b=&b;
    printf("entrer les valeur de \n");
    printf("A= ");
    scanf("%f",&a);
    printf("B= ");
    scanf("%f",&b);
    // la meme operation pour la somme et defference et divition 
 
 printf("le produit de %f et %f est %.2f ",a,b,oper(p_a,p_b));
 return 0 ;
}