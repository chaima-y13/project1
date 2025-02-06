#include<stdio.h>
#include<conio.h>
 int main(){
 int Tab[10],aide,i,j;
 
 for(i=0;i<10;i++)
 { printf("Element[%d]=",i);
   scanf("%d",&Tab[i]);
 }
 
 for(i=0;i<10;i++)
  printf("%d  ",Tab[i]);
   
 for(i=0;i<9;i++)
 { if(Tab[i]==0) {
       j=i+1;
       while(Tab[j]==0 && j<9) {j++;}
       aide = Tab[i]; 
       Tab[i]= Tab[j]; 
       Tab[j]= aide ;
      }
 }
 
  printf("\n");
  
  for(i=0;i<10;i++)
  printf("%d  ",Tab[i]);
 
 return 0; 
 }