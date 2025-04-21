#include<stdio.h>
#include<stdlib.h>
// constract a list from n data entered by a user 
typedef struct noeud {
    int val;
    struct noeud *next;
} node;
node *head ;
void insert(int v)
{
 node *temp;
 temp=malloc(sizeof(temp));
 temp->val=v;
 temp->next=head;
 head=temp;
}
void list ()
 {
    node *temp;
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