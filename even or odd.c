#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter the number to check if the given number is even odd or zero.");
    scanf("%d",&a);
        if(a==0)
            printf("The given number %d is zero.",a);
        if(a%2==0)
            printf("The given number %d is even.",a);
        else
            printf("The given number %d is odd",a);
    return 0;
}