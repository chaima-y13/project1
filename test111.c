#include<stdio.h>
#include<stdlib.h>
// constract a list from n data entered by a user 
struct noeud {
    int val;
    struct noeud *next;
};
struct noeud *head ;
void insert(int v)
{
 struct noeud *temp;
 temp=malloc(sizeof(temp));
 temp->val=v;
 temp->next=head;
 head=temp;
}
void list ()
 {
    struct noeud *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->val);
        temp=temp->next;
    }
 }
int main ( ){
 int a;
 printf("write a number u want to add to list ");
 scanf("%d",&a);
 insert(a);
 printf("\n----------------------------\n");
 list();
 return 0;
}