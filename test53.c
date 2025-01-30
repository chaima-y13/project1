#include<stdio.h>
int main () {
    // algorithme qui affiche si un nombre  entier N  saisi au clavier est Premier ou non
    int i,p,e=0;
    printf("donner un nombre");
    scanf("%d",&p);
    for (i=2;i<p/2;i++)
  {
    if(p%i==0)
    e=1;
  }
  if(e==0)
  printf("ce nombre est premier");
  else printf("ce nombre n est pas premier");
  return 0;
}