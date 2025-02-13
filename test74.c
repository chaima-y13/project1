#include<stdio.h> 
int carc(char arc)
{
    // verifie si le caractere est une lettre minuscule
    // renvoie 1 si oui,0 sinon
    int result;
    if(arc>='a' && arc<='z') {
     result =1;
     
    printf("%c est un caractere minuscule\n",arc);}
    else  {result =0;
        printf("%c n'est pas un caractere minuscule\n",arc);
        return 0;}
}
int main () {
    // foction qui verifier si un caractere et minuscule ouu no 
  char c;
  printf("enter un caractere\n");
  scanf("%c",&c);
  carc(c);
  return 0;

}