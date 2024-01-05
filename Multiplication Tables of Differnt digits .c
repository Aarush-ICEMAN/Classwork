#include <stdio.h>

// Function to print the multiplication table for a given number
void printTable(int* mulTable, int num, int n) {
    printf("The multiplication table of %d is:\n", num);

    // Loop to calculate and store the values in the mulTable array
    for (int i = 0; i < n; i++) {
        mulTable[i] = num * (i + 1);
    }

    // Loop to print the multiplication table
    for (int i = 0; i < n; i++) {
        printf("%d x %d = %d\n", num, i + 1, mulTable[i]);
    }

    // Separator line
    printf("************************************************\n\n");
}

int main() {
    // Create a 2D array to store the multiplication tables
    int mul[3][10];

    // Call the printTable function to generate and print multiplication tables
    printTable(mul[0], 2, 10); // Generate table for 2
    printTable(mul[1], 7, 10); // Generate table for 7
    printTable(mul[2], 9, 10); // Generate table for 9

    return 0;
}


