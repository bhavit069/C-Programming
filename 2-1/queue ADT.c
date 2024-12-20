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

void enqueue(struct Node** head, int data) {
    // insert at end
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
}

void dequeue(struct Node** head) {
    // delete from beginning
    if (*head == NULL) {
        printf("Stack is empty, can't pop");
        return;
    }
    
    struct Node* temp = *head;
    *head = (*head)->next;
    
    free(temp);
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
    enqueue(&head, 5);
    enqueue(&head, 15);
    enqueue(&head, 10);
    displayStack(head);
    dequeue(&head);
    displayStack(head);
    return 0;
}
