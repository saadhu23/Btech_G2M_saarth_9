#include <stdio.h>

int main() {
    int a, i;
    float sum = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &a);

    // Start i at 1 to avoid division by zero
    for(i = 1; i <= a; i++) { 
        sum = sum + (1.0 / i);
    }

    printf("Sum is: %f\n", sum);

    return 0;
}