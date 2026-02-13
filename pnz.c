#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter the number to check if the number is positive, negative or zero.");
    scanf("%d",&a);
        if(a==0)
            printf("The given number %d is zero.",a);
        else if(a>0)
            printf("The given number %d is positive.",a);
        else
            printf("The given number %d is negative",a);
    return 0;
}