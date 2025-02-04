#include <stdio.h>
int main(){
int Tab[10],auxilaire,i,j;

 for( i=0; i < 10; i++){ 
    printf("Entrer un entier:");
    scanf("%d",&Tab[i]);
  } 
   
 for( i=0; i < 9; i++){ 
   for( j=i+1; j < 10; j++){
       if ( Tab[j] < Tab[i])
         {  auxilaire = Tab[i] ;
           Tab[i] = Tab[j] ;
           Tab[j] = auxilaire ;
          }
      } 
 } 
for( i=0; i < 10; i++) 
    printf("%d\t",Tab[i]); 
return 0; 
}