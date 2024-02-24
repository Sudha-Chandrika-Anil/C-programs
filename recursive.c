#include <stdio.h>

#define MAX_SIZE 100

int arr[MAX_SIZE] = {5, 8, 12, 34, 2};
int size = 5; // Adjust the size accordingly

void displayArrayRecursive(int index) {
    if (index >= size) {
        return; // Base case: stop the recursion when the index goes beyond the array size
    }

    printf("%d ", arr[index]);
    displayArrayRecursive(index + 1); // Recursively call the function with the next index
}

int main() {
    printf("Array elements in the same order: ");
    displayArrayRecursive(0); // Start the recursion from index 0
    printf("\n");

    return 0;
}
