#include<stdio.h>
#include<math.h>
int main()
{
    int r;
    float area,circumference;
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
        area=(3.14*r*r);
        circumference=(2*3.14*r);
    printf("The area of the circle is: %f",area);
    printf("The circumference of the circle is: %f",circumference);
    return(0);


}