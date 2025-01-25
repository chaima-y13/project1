#include<stdio.h>
int main () {
    // calculatio de prix totale 
    int qc,qs,qca;
    float pc,ps,pca,s;
    printf("donner le nombre des cahiers\t");
    scanf("%d",&qc);
    printf("donner le prix unitair d un seul cahier\t");
    scanf("%f",&pc);
    printf("donner le nombre des stylos\t");
    scanf("%d",&qs);
    printf("donner le prix unitair d un seul stylo\t");
    scanf("%f",&ps);
    printf("donner le nombre des cartables \t");
    scanf("%d",&qca);
    printf("donner le prix unitair d un seul cartable\t");
    scanf("%f",&pca);
    s=(qc*pc)+(qs*ps)+(qca*pca);
    printf("le prix total est : %.2f",s);
    return 0;
}