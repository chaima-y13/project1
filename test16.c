#include<stdio.h>
int main () {
    // saiser valider ou non valider d une note saiser
    float note;
    do 
    { 
        printf("donner la note ");
        scanf("%f",&note);
    } 
    while( note>20 || note<0 );

    if(note >=10)
    printf("valide");
    else printf(" non valide");
    return 0;
}