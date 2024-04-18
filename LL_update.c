#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
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

// Function to update the value of a node at a specific position in the linked list
void updateNode(struct Node* head, int position, int newData) {
    int count = 0;
    struct Node* current = head;

    // Traverse the list until the specified position
    while (current != NULL && count < position) {
        current = current->next;
        count++;
    }

    // If position is out of range or current is NULL, return
    if (current == NULL) {
        printf("Position out of range.\n");
        return;
    }

    // Update the data of the node at the specified position
    current->data = newData;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    printf("Linked list: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;

    // Insert elements into the linked list
    insert(&head, 3);
    insert(&head, 7);
    insert(&head, 12);

    // Print the original linked list
    printList(head);

    // Update the value at position 1 (second node)
    updateNode(head, 1, 10);

    // Print the updated linked list
    printList(head);

    return 0;
}
