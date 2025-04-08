#include<stdio.h>
#include<stdlib.h>
// les listes chainie 
struct noeud {
    int val ;
    struct noeud *next;
};
struct noeud * head ;
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

int main () {
    insert(3);
    insert(4);
    list();
return 0;
}