#include <stdio.h>

void RightAngleTriangle(int r) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void InvertedRightAngleTriangle(int r) {
    int i, j;
    for (i = r; i > 0; i--) {
        for (j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void EquilateralTriangle(int r) {
    int i, j, k;
    for (i = 1; i <= r; i++) {
        for (j = r- i; j > 0; j--) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void Square(int s) {
    int i, j;
    for (i = 0; i < s; i++) {
        for (j = 0; j < s; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int ch, r, s;
    printf("Choose the pattern to print:\n");
    printf("1. Right-angled triangle\n");
    printf("2. Inverted right-angled triangle\n");
    printf("3. Equilateral triangle\n");
    printf("4. Square\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    
    switch (ch) {
        case 1:
            printf("Enter the number of rows for right-angled triangle: ");
            scanf("%d", &r);
            printRightAngleTriangle(r);
            break;
        case 2:
            printf("Enter the number of rows for inverted right-angled triangle: ");
            scanf("%d", &r);
            printInvertedRightAngleTriangle(r);
            break;
        case 3:
            printf("Enter the number of rows for equilateral triangle: ");
            scanf("%d", &r);
            printEquilateralTriangle(r);
            break;
        case 4:
            printf("Enter the side length for square: ");
            scanf("%d", &s);
            printSquare(s);
            break;
        default:
            printf("Invalid choice!");
    }
    
    return 0;
}
