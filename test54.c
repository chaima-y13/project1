#include<stdio.h>
int main(){
int i,j=0,k=0,T[10],T1[10],T2[10];
for(i=0;i<10;i++) {  
  printf("Enter un entier:");
  scanf("%d",&T[i]);
}  

for(i=0;i<10;i++) {  
   if(T[i]%2 ==0){ 
     T1[j]= T[i];  j++;
   }else  { T2[k]=T[i]; k++; }
}

for(i=0;i<j;i++)   
    printf("%d ",T1[i]);
printf("\t");
for(i=0;i<k;i++)   
    printf("%d ",T2[i]); 
return 0 ;    
}