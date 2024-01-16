#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[3][3], int secondMatrix[3][3], int resultMatrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {

            resultMatrix[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to add two matrices
void addMatrices(int firstMatrix[3][3], int secondMatrix[3][3], int resultMatrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d  ", matrix[i][j]);
            if (j == 2) {
                printf("\n");
            }
        }
    }
}

int main() {
    int firstMatrix[3][3], secondMatrix[3][3], resultMatrix[3][3], addMatrix[3][3];

    // Input for the first matrix
    printf("Enter values for the first matrix (3x3):\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input for the second matrix
    printf("\nEnter values for the second matrix (3x3):\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Multiply the matrices
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix);

    // Add the matrices
    addMatrices(firstMatrix, secondMatrix, addMatrix);
    
    // Display the matrices and their product
    printf("\nFirst Matrix:\n");
    displayMatrix(firstMatrix);

    printf("\nSecond Matrix:\n");
    displayMatrix(secondMatrix);

    printf("\nResult Matrix (Multiplication):\n");
    displayMatrix(resultMatrix);
    
    printf("\nResult Matrix (Addition):\n");
    displayMatrix(addMatrix);

    return 0;
}