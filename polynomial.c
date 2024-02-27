#include <stdio.h>

#define MAX_DEGREE 100

void displayPolynomial(int degree, int coefficients[]) {
    printf("The polynomial is: ");
    for (int i = degree; i >= 0; i--) {
        printf("%dx^%d ", coefficients[i], i);
        if (i > 0) {
            printf("+ ");
        }
    }
    printf("\n");
}

int main() {
    int degree;
    int coefficients[MAX_DEGREE + 1]; // Add 1 to the maximum degree to store constant term

    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    printf("Enter the coefficients from highest degree to lowest degree:\n");
    for (int i = degree; i >= 0; i--) {
        printf("Coefficient for x^%d: ", i);
        scanf("%d", &coefficients[i]);
    }

    displayPolynomial(degree, coefficients);

    return 0;
}
