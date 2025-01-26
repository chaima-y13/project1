#include<stdio.h>
#include<math.h>
int main () {
    // le nombre premier
    int n,i,e=0;
    printf("donner un nombre");
    scanf("%d",&n);
     for (i=2;i<=n/2;i++)
     {
        if(n%i!=0)
        e=1;
        break;
     }
     if(e==1)
        printf("%d est un nombre premier",n);
        else if(e==0) printf(" %d n est pas un nombre premier",n);
        return 0;
}