#include <stdio.h>

int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a two-dimensional array with the given dimensions
    int matrix[rows][cols];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    int i;
    for ( i = 0; i < rows; i++) {
    	int j;
        for ( j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the elements of the array
    printf("\nElements of the array are:\n");
    for (i = 0; i < rows; i++) {
    	int j;
        for ( j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

