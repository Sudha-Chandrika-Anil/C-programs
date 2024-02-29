#include <stdio.h>

#define MAX_SIZE 100

int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
int size = 5; // Adjust the size accordingly

void displayArrayRecursiveReverse(int index) {
    if (index < 0) {
        return; // Base case: stop the recursion when the index goes below 0
    }

    printf("%d ", arr[index]);
    displayArrayRecursiveReverse(index - 1); // Recursively call the function with the previous index
}

int main() {
    printf("Array elements in reverse order: ");
    displayArrayRecursiveReverse(size - 1); // Start the recursion from the last index
    printf("\n");

    return 0;
}
