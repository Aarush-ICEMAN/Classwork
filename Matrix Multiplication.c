#include <stdio.h>

#define SIZE 3

// Function to multiply two matrices and store the result in the third matrix
void multiplyMatrices(int firstMatrix[SIZE][SIZE], int secondMatrix[SIZE][SIZE], int result[SIZE][SIZE]) {
	int i;
    for ( i = 0; i < SIZE; ++i) {
    	int j;
        for ( j = 0; j < SIZE; ++j) {
            result[i][j] = 0;
            int k;
            for ( k = 0; k < SIZE; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[SIZE][SIZE]) {
	int i;
    for ( i = 0; i < SIZE; ++i) {
    	int j;
        for ( j = 0; j < SIZE; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[SIZE][SIZE] = {{6,4 ,5 }, {3,9 ,1 }, {5,7 ,9 }};
    int secondMatrix[SIZE][SIZE] = {{3,6 ,8 }, {9,2 ,5 }, {8, 2,9 }};
    int resultMatrix[SIZE][SIZE];

    // Call the function to multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix);

    // Display the matrices
    printf("First Matrix:\n");
    displayMatrix(firstMatrix);

    printf("\nSecond Matrix:\n");
    displayMatrix(secondMatrix);

    printf("\nResult Matrix:\n");
    displayMatrix(resultMatrix);

    return 0;
}

