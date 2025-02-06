#include<stdio.h>
int main (){
    // legalité entre deux tableau 
    int i,j=0,t[10],tv[10];
    printf("les information de premier tableau\n");
    for (i=1;i<=10;i++)
    {
        printf("donner la valeur de %d phase ",i);
        scanf("%d",&t[i]);
    }
    for(i=1;i<=10;i++)
    {
        printf("veuillez saiser la valeur de %d phase  ",i);
        scanf("%d",&tv[i]);
    }

    for(i=1;i<=10;i++)
    {
        if(t[i]!=tv[i])
        j=1;
    }
    if(j==0)
    printf("vrais");
    else printf("faux");
    return 0;
    
}