
#include <stdio.h>

int main() {
    int rows, cols, i, j, sum;
    int matrix[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        sum = 0; 
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        printf("Sum of Row %d: %d\n", i + 1, sum);
    }
    for (j = 0; j < cols; j++) {
        sum = 0; // Reset sum for each new column
        for (i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        printf("Sum of Column %d: %d\n", j + 1, sum);
    }

    return 0;
}