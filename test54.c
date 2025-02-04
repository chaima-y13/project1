#include<stdio.h>
int main () {
    //algorithme qui demande la saisie d'un tableau T de 10 entiers, et de mettre les éléments pairs dans  un tableau T1 et les éléments impaires dans un tableau T2. Puis afficher T1  et  T2   
    int i,c=1,q=1,t[10],t2[10],t1[10];
    for(i=1;i<=10;i++)
    {
        printf("vuillez saiser la valeur de %d phase",i);
        scanf("%d",&t[i]);   
    }
    printf("\n");
    for (i=1;i<=10;i++)
    {
          if(t[i]<0)
          { t1[c]=t[i] ; c++;
          }
    }
    for(i=1;i<=10;i++)
    {
        if(t[i]>0)
        { t2[q]=t[i] ; q++;}
    }
    // l'affichage 
    printf("les nombre positives\n");
    for(i=1;i<=10;i++)
    {
        printf("t[%d]=%d\n",i,t2[i]); 
    }
    printf("le nombre negatives \n");
    for(i=1;i<=10;i++)
    {
        printf("t[%d]=%d\n",i,t1[i]);
    }
   
    return 0;
    
    
}