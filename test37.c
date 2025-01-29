#include<stdio.h>
int main ( ){
    //afiichage de moix lorseu on lutilisateur tapper le nombre de moix
    int moix;
    printf("donner le nombre de moix");
    scanf("%d",&moix);
    switch (moix)
    {
        case 1 : printf("janvier\n");break;
        case 2 : printf("fevreier\n");break;
        case 3 : printf("mars\n");break;
        case 4 : printf("avril\n");break;
        case 5 : printf("mai\n");break;
        case 6 : printf("juin\n");break;
        case 7 : printf("juillet \n");break;
        case 8 : printf("aout\n");break;
        case 9 : printf("sebtembre\n");break;
        case 10 :printf("octobre\n");break;
        case 11 :printf("novembre\n");break;
        case 12 :printf("decembre\n");break;
    }
    return 0;
}