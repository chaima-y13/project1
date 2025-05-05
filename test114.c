#include <stdio.h>
#include <stdlib.h>

typedef struct noeud {
    int note;
    struct noeud *next;
} node;

node *head = NULL;

void insert(int a) {
    node *temp = malloc(sizeof(node));
    temp->note = a;
    temp->next = head;
    head = temp;
}

void delete_head() {
    if (head == NULL) return;
    node *temp = head;
    head = head->next;
    free(temp);
}

void list() {
    node *temp = head;
    while (temp != NULL) {
        printf("%d\t", temp->note);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insert(4);
    insert(15);
    insert(20);
    delete_head();
    list();
    return 0;
}
