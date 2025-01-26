#include<stdio.h>
#include<math.h>
int main () {
    // le nombre parfait et le nombre abondant et le nombre deficient
    int n,s,i;
    printf("donner un nombre");
    scanf("%d",&n);
    s=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }

    if (s==n)
    printf("%d est un nombre parfait",n);

    else if(s>n)
    printf("%d est un abondant",n);

    else printf("%d est un deficient",n);

    return 0;


}