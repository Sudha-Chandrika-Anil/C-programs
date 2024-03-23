#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of X pattern (odd number and minimum 3): ");
    scanf("%d", &n);
    // X pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i || j == n - i + 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
