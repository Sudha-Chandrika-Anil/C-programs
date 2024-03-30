#include <stdio.h>

int main() {
    int num = 10; 
    int *ptr;    

    ptr = &num;   

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    // Changing the value of num through the pointer
    *ptr = 20;
    printf("New value of num: %d\n", num);

    return 0;
}
