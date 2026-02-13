#include <stdio.h>

int main()
{
    int a, y, m, d;

    printf("Enter the number of days: ");
    scanf("%d", &a);

    if (a % 365 == 0) {
        y = a / 365;
        printf("The number of years the days constitute are %d\n", y);
    } 
    else {
        y = a / 365;
        m = (a % 365) / 30;
        d = (a % 365) % 30;

        printf("The days constitute %d years %d months %d days\n", y, m, d);
    }

    return 0;
}