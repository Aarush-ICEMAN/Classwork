#include <stdio.h>
#include <math.h>

int main() {
    int num;
    double cubeRoot;

    printf("Enter a natural number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive natural number.\n");
        return 1; // Exit the program with an error code
    }

    cubeRoot = cbrt(num);

    printf("Cube root of %d is %.3f\n", num, cubeRoot);

    return 0;
}

