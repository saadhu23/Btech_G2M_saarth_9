#include <stdio.h>
#include <math.h>
int main()
{
    int e,f, sum;
    printf("My section is G2M\n");
    printf("Enter the value of e and f :");
    scanf("%d;%d", &e,&f);
        sum=e+f;
        printf("The sum of e and f is - %d", sum);
    return(0);
}


include <stdio.h>

int main() {
    int rows, cols, i, j, sum;
    int matrix[10][10];

    // Input dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and print Sum of each Row
    for (i = 0; i < rows; i++) {
        sum = 0; // Reset sum for each new row
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        printf("Sum of Row %d: %d\n", i + 1, sum);
    }

    // Calculate and print Sum of each Column
    for (j = 0; j < cols; j++) {
        sum = 0; // Reset sum for each new column
        for (i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        printf("Sum of Column %d: %d\n", j + 1, sum);
    }

    return 0;
}