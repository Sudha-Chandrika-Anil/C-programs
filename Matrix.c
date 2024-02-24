#include <stdio.h>

#define ROWS 3
#define COLS 3

int matrix1[ROWS][COLS];
int matrix2[ROWS][COLS];
int result[ROWS][COLS];

// Function prototypes
void readMatrix(int matrix[][COLS]);
void displayMatrix(int matrix[][COLS]);
void addMatrices();
void subtractMatrices();
void multiplyMatrices();

int main() {
    printf("Enter elements of the first matrix:\n");
    readMatrix(matrix1);

    printf("Enter elements of the second matrix:\n");
    readMatrix(matrix2);

    printf("First matrix:\n");
    displayMatrix(matrix1);

    printf("Second matrix:\n");
    displayMatrix(matrix2);

    addMatrices();
    printf("Addition result:\n");
    displayMatrix(result);

    subtractMatrices();
    printf("Subtraction result:\n");
    displayMatrix(result);

    multiplyMatrices();
    printf("Multiplication result:\n");
    displayMatrix(result);

    return 0;
}

void readMatrix(int matrix[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrices() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiplyMatrices() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
                result[i][j] = matrix1[i][j] * matrix2[i][j];
            }
        }
    
    }
