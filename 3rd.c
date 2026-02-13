#include<stdio.h>
#include<math.h>
int main()
{int SI,P,R,T;
    printf("Enter the Principle amount:\n");
    scanf("%d",&P);
    printf("Enter the Rate of Interest:\n");
    scanf("%d",&R);
    printf("Enter the Time duration in years:\n");
    scanf("%d",&T);
        SI=(P*R*T)/100;
    printf("The chargeable amount after Simple Intrest is : %d",SI);
    return(0);
}