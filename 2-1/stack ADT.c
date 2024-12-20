#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(struct Node** head, int data) {
    // insert at beginning
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void pop(struct Node** head) {
    // delete from beginning
    if (*head == NULL) {
        printf("Stack is empty, can't pop");
        return;
    }
    
    struct Node* temp = *head;
    *head = (*head)->next;
    
    free(temp);
    printf("Popped from Stack\n");
}

void displayStack(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main() {
    struct Node* head = NULL;
    push(&head, 5);
    push(&head, 15);
    push(&head, 10);
    displayStack(head);
    pop(&head);
    displayStack(head);
    return 0;
}
