#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node *next, *prev;
};

struct List {
    struct Node *head;
    void new_node(int data);
    void delete_node(struct Node* n);
};

void List::new_node(int data) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->next = this->head;
    n->data = data;
    n->prev = this->head->prev;
    this->head->prev->next = n;
    this->head = n;
}

void List::delete_node(struct Node* n) {
    n->prev->next = n->next;
    n->next->prev = n->prev;
    free(n);
}

int main()
{
    return 0;
}
