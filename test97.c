#include<stdio.h>
int main () {
    // exercice les pointeurs 
    int arr[] ={42,77,89,56,73};
    int *ptr =arr;
    printf("*(++ptr) : %d\n",*(++ptr)); // 77
    ptr=&arr[0];
    printf("*(ptr+3) : %d\n",*(ptr+3)); // 56
    ptr=&arr[0];
    printf("*(ptr++) : %d\n",*(ptr++)); //42
    ptr=&arr[0];
    printf("*(ptr + *(ptr+1)-arr[4]) : %d\n",*(ptr + *(ptr+1)-arr[4])); //73
    ptr=&arr[0];
    printf("ptr == & arr[4] : %d\n",ptr == arr[4]); //0
    int *ptr2=&arr[3];
    printf("*ptr*=*ptr2 : %d\n",*ptr*= *ptr2 ); // 2352
    return 0;

}