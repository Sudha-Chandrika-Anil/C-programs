#include <stdio.h>

int main() {
    int arr[100], n, search, i, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d found at index %d.\n", search, i);
    } else {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
