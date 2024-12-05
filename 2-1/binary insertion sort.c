#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insertNode(struct Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
    } else if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    
    return root;
}

void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void binaryInsertionSort(int arr[], int n) {
    struct Node* root = NULL;

    for (int i = 0; i < n; i++) {
        root = insertNode(root, arr[i]);    
    }
    
    printf("Sorted Array: ");
    inorderTraversal(root);
    printf("\n");
}

int main() {
    int arr[] = {5, 9, 23, 53, 41, 18, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    binaryInsertionSort(arr, n);

    return 0;
}
