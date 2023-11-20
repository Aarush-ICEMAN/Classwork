#include <stdio.h>

int main() {
	int i;
    int arr[] = {10,26 ,22 ,27 ,4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n == 0) {
        printf("The array is empty.\n");
        return 0;
    }

    int max_element = arr[0];
    int max_index = 0;

    for ( i = 1; i < n; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
            max_index = i;
        }
    }

    printf("The maximum element is %d at index %d.\n", max_element, max_index);

    return 0;
}

