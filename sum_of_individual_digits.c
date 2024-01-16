#include <stdio.h>

int main() {
    int number, originalNumber, remainder, sum = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Save the original number
    originalNumber = number;

    // Calculate the sum of individual digits
    while (number != 0) {
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }

    // Display the result
    printf("Sum of digits of %d = %d\n", originalNumber, sum);

    return 0;
}
