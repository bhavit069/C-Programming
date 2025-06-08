#include <stdio.h>

int main() {
    int memory[100] = {0};
    int startBlock, fileLength;

    printf("Enter starting block: ");
    scanf("%d", &startBlock);

    printf("Enter file size: ");
    scanf("%d", &fileLength);

    int canAllocate = 1;
    for (int i = startBlock; i < startBlock + fileLength; i++) {
        if (memory[i] == 1) {
            canAllocate = 0; // change bool to false
            break;
        }
    }

    if (canAllocate) {
        for (int i = startBlock; i < startBlock + fileLength; i++) {
            memory[i] = 1;
            printf("From %d to %d", startBlock, startBlock + fileLength - 1);
            break;
        }
    } else {
        printf("Cannot allocate file");
    }
}
