#include<stdio.h>
int main  (){
    // lidee des pointeur education 
    int arr []={10,20,30,40,50};
    int *ptr= arr;
    ptr++;
    printf("ptr++ x1 = %d\n",*ptr);
    ptr++; 
    printf("ptr++ x2 = %d\n",*ptr);
    ptr--; 
    printf("ptr++ x3 = %d\n",*ptr);
    printf("\n-----------------------------------------\n");
    printf("l'addition\n");
    ptr+=2;
    printf("ptr+2 = %d\n",*ptr);
    printf("soustracion\n ");
    ptr-=3;
    printf("ptr-3= %d\n",*ptr);
    // *(ptr+3) vs *ptr+3;
    printf("*(ptr+3)=%d\n",*(ptr+3));
    printf("*ptr+3= %d\n",*ptr+3);
    // *(ptr++) vs *(++ptr)
    printf("*(ptr++)=%d\n",*(ptr++));
    printf("*(++ptr)=%d\n",*(++ptr)); 
    return 0;
}