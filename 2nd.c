#include <stdio.h>
#include <math.h>
int main()
{   int sub1,sub2,sub3,sub4,sub5,percentage;
    printf("Enter the value of 1st subject:");
    scanf("%d", &sub1);
    printf("Enter the value of 2nd subject:");
    scanf("%d", &sub2);
    printf("Enter the value of 3rd subject:");
    scanf("%d", &sub3);
    printf("Enter the value of 4th subject:");
    scanf("%d", &sub4);
    printf("Enter the value of 5th subject:");
    scanf("%d", &sub5);
        percentage=(sub1+sub2+sub3+sub4+sub5)/5;
    printf("The percentage of the given 5 subjects is - %d", percentage);
    return(0);
}