AccueilPythonExo46 (algorithme C C++)
Exo46 (algorithme C C++)
byLe chemin vers la programmation juin 02, 2021


                                                                   
Écrire  un programme  qui compte le nombre d'éléments en double ( deux éléments ou plus )  dans un tableau d'entiers saisie par l'utilisateur.

********  En Algorithme ********    

                                                                                                                                                                                Algorithme 
Variables  test,compteur,i,j: entiers
Debut

  pour i de 1 à 10 faire
   Ecrire("Enter un entier:")
   Lire(tab[i])                
  FinPour

 pour i de 1 à 10 faire
       test ← 0           
   pour j de 1 à 10 faire
      Si ( tab[i] = tab[j] )alors                    
           test ← test+1
      FinSi		   
   FinPour
      Si (test >  1) alors  
	   compteur ← compteur+1  
      FinSi	   
 FinPour
 Ecrire("Les elements en double sont:",compteur/2)
 
Fin


Résultat ==>   1  6  8  0  6  3  6  0  1  4
                    Les elements en double sont: 3

Retour vers la liste d'exercices 

                                                                                                                                                                                                                                       

********  En  langage  C   ********    


                                                                                                                                                                               #include<stdio.h>
 int main(){
 int i,j,tab[10],test,compteur=0;   
 for(i=0;i<10;i++){
  printf("Enter un entier:");
  scanf("%d",&tab[i]);                
 }

 for(i=0;i<10;i++){
       test=0;          
  for(j=0;j<10;j++){
      if ( tab[i] == tab[j]  )                    
           test++;
   }
    if (test >  1)   compteur++  ;  
 }
 printf("Les elements en double sont %d",compteur/2) ;
 return 0;     
 }