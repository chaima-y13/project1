#include<stdio.h>
int main () {
    // triangle des hitoiles 
    int i,j,N;   
printf("donner  un entier : ");
scanf("%d",&N);

for(i=0;i<N;i++){
  for(j=1;j<=(N*2)-1;j++){
    if (j>=N-i && j<= N+i )                    
        printf("*");
      else   printf(" ");   
  }
  printf("\n");      
  }
return 0 ;    
}
