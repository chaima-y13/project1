#include<stdio.h>
 struct etd {
    char name[50];
    int mark[3];
} ;
float avmd( struct etd student)
{ int i,s=0; float m;
    for(i=0;i<3;i++)
    { 
       s+=student.mark[i];
    }
 m=s/3.0;
 return m ;
}
int main () {
    // the avrege of marks of a student 
    int i; 
    struct etd p1;
    printf(" enter the student name ");
    scanf("%s",p1.name);
    for (i=0;i<3;i++)
    { printf("enter the marks of the %d student \n",i+1);
        scanf("%d",&p1.mark[i]);
    }
    printf("\n");
    printf("student informations \n");
    printf(" name : %s\n",p1.name);
    printf("the avredge of their marks is %.2f",avmd(p1));
return 0;   
}
