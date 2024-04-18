#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insert(struct Node** headRef, int newData) {
    // Allocate memory for new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    // Set data for the new node
    newNode->data = newData;

    // Make the new node point to the current head
    newNode->next = *headRef;

    // Update the head to point to the new node
    *headRef = newNode;
}

int main() {
  
    struct Node* head = NULL;


    insert(&head, 3);
    insert(&head, 7);
    insert(&head, 12);

    // Print the linked list
    printf("Linked list: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}
