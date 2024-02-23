#include <stdio.h>

#define MAX_SIZE 100

int arr[MAX_SIZE];
int size;

// Function prototype
void searchElementPositions(int element);

int main() {
    int element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid array size. Please enter a size between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    searchElementPositions(element);

    return 0;
}

void searchElementPositions(int element) {
    int positions[MAX_SIZE];
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            positions[count++] = i;
        }
    }

    if (count == 0) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at positions: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    }
}
