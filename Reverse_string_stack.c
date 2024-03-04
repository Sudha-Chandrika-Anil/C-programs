#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

int isFull() {
    return top == MAX_SIZE - 1;
}

int isEmpty() {
    return top == -1;
}

void push(char ch) {
    if (isFull()) {
        printf("Stack Overflow: Cannot push element %c, stack is full.\n", ch);
    } else {
        top++;
        stack[top] = ch;
    }
}

char pop() {
    if (isEmpty()) {
        printf("Stack Underflow: Cannot pop element, stack is empty.\n");
        return '\0';
    } else {
        char ch = stack[top];
        top--;
        return ch;
    }
}

void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        push(str[i]);
    }

    for (int i = 0; i < len; i++) {
        str[i] = pop();
    }
}

int main() {
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the trailing newline character from fgets input
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
