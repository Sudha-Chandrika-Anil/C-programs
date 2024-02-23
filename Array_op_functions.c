#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes
int insertElement(int arr[], int size);
void searchElement(int arr[], int size);
int deleteElement(int arr[], int size);
void sortArray(int arr[], int size);
void displayArray(int arr[], int size);

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice;

    do {
        printf("\nMenu\n");
        printf("1. Insert element\n");
        printf("2. Search element\n");
        printf("3. Delete element\n");
        printf("4. Sort array\n");
        printf("5. Display array\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                size = insertElement(arr, size);
                break;
            case 2:
                searchElement(arr, size);
                break;
            case 3:
                size = deleteElement(arr, size);
                break;
            case 4:
                sortArray(arr, size);
                break;
            case 5:
                displayArray(arr, size);
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

int insertElement(int arr[], int size) {
    if (size >= MAX_SIZE) {
        printf("Array is full. Cannot insert more elements.\n");
        return size;
    }

    int element;
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    arr[size] = element;
    size++;

    printf("Element inserted successfully.\n");
    return size;
}

void searchElement(int arr[], int size) {
    int element;
    printf("Enter the element to search: ");
    scanf("%d", &element);

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element found at index %d.\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }
}

int deleteElement(int arr[], int size) {
    int element;
    printf("Enter the element to delete: ");
    scanf("%d", &element);

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            found = 1;
            printf("Element deleted successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return size;
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array sorted successfully.\n");
}

void displayArray(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
