#include <stdio.h>
#include <stdlib.h>

struct Block {
    int index;
    struct Block* next;
};

int main() {
    int fileLength;
    printf("Enter number of blocks required for the file: ");
    scanf("%d", &fileLength);

    struct Block* head = NULL, *temp = NULL;

    for (int i = 0; i < fileLength; i++) {
        struct Block* newBlock = (struct Block*)malloc(sizeof(struct Block));
        newBlock->index = rand() % 100; // simulate random block
        newBlock->next = NULL;

        if (head == NULL)
            head = temp = newBlock;
        else {
            temp->next = newBlock;
            temp = newBlock;
        }
    }

    // Display allocated blocks
    printf("File stored in blocks (linked): ");
    temp = head;
    while (temp != NULL) {
        printf("[%d] -> ", temp->index);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
