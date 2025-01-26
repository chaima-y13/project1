#include<stdio.h>
int main () {
    // liste de nombre parfait
    int  n,i,j,s;
    printf("donner un nombre ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        s=0;
        for (j=1;j<i;j++)
        {
            if(i%j==0)
            s+=j; 
        }
        if(i==s)
        printf("%d\t",s);
    }
    return 0;
}