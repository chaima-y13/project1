#include<stdio.h>
struct etd {
    char nom[50];
    char prenom[50];
    int age;
    float moy;
};
int main () {
    // affichage des information dun etudiant
    int i,n;
    printf("donner le nombre des etudiant");
    scanf("%d",&n); 
    struct etd t[n];
    for(i=1;i<=n;i++)
    {
        printf("entrer le nom de %d etudiant\n",i);
        scanf("%s",&t[i].nom);
        printf("enter leur prenom\n");
        scanf("%s",&t[i].prenom);
        printf("entrer leur age\n");
        scanf("%d",&t[i].age);
        printf("enter la moyenne\n");
        scanf("%f",&t[i].moy);
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("name : %s\t",t[i].nom);
        printf("second name : %s\t",t[i].prenom);
        printf(" age :%d\t",t[i].age);
        printf("moyenne : %.2f\t",t[i].moy);
        printf("\n");
    }
    return 0;
}
