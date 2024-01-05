#include <stdio.h>

// Function to calculate Fibonacci number recursively
int fibonacci(int n);

int main() {
    int terms;

    // Input the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    // Print Fibonacci series
    printf("Fibonacci Series: ");
    int i;
    for ( i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

