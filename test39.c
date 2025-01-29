#include <stdio.h>
int main(){
int i=1 , S=0;  

   do{ 
        S = S+i;
        i++ ;  // i = i+1
   } while ( i <= 10  ) ;
   
 printf("la somme 1+2+3+....+10 = %d",S);
return 0; 
}

    
