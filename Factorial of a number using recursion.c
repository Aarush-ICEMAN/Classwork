#include <stdio.h>

// Function to calculate factorial recursively
unsigned long long factorial(int n);

int main() {
    int num;

    // Input the number
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1; // Return error code
    }

    // Calculate and print the factorial
    printf("Factorial of %d = %llu\n", num, factorial(num));

    return 0;
}

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

