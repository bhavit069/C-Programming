#include <stdio.h>

int factorial(int n) {
    // make sure n is a positive number
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}

int main() {
    int num;

    printf("Enter a non-negative number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(num);
        printf("The factorial of %d is %d\n", num, result);
    }

    return 0;
}