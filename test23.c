#include<stdio.h>
int main () {
    // list de nombres positifs et negatifs 
    int n , x ,i,po,ne;
    printf("vueillez saiser le nombre des entiers");
    scanf("%d",&n);
    po=0; ne=0;
    for(i=1;i<=n;i++)
    {
        printf("veuillez saiser un nombre ");
        scanf("%d",&x);
        if(x>0)
        po+=1;
        else
        ne+=1;   
    }
    printf(" le nombre des nombre positives est %d ",po);
    printf("le nombre des nombre negatives est %d",ne);
    return 0;
}