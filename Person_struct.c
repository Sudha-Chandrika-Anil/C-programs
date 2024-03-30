#include <stdio.h>

struct Person {
    char name[50];
    int age;
    char gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);
    
    printf("Enter age: ");
    scanf("%d", &p.age);
    
    printf("Enter gender (M/F): ");
    scanf(" %c", &p.gender);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %c\n",p.gender);

    return 0;
}
