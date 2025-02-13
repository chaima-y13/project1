// une notre methode pour la solution de (si un caractere est un minuscule ou non) 
#include<stdio.h> 
int caracter_m(char x)
{ int result;
    if(x>='a' && x<='z')
    return 1;
    else return 0;
}
int main () {
    char x;
    printf("entrer un caractere ");
    scanf("%c",&x);
    if(caracter_m(x) == 1) 
    printf("le caractere %c est minuscule",x);
    else printf("le caractere n'est pas minuscule");
    return 0;  // fin de notre programme


}