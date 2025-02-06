#include<stdio.h>
int main () {
    // dit est ce que ce symbole est un lettre ou non et est ce que est majuscule ou menuscule
    char ltr;
    printf("veuillez saiser un lettre  ");
    scanf("%c",&ltr);
    if(ltr>=65 && ltr<=90)
    printf("ce lettre est majuscule");
    else {
        if ( ltr>= 97 && ltr<= 122)
        printf("ce lettre est menuscule");
        else printf("ce n est pas un lettre");
    }
    return 0;
}