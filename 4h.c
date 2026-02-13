#include<stdio.h>
#include<math.h>
int main()
{
    double CI,S,R,T;
    printf("Enter the principal amount:");
    scanf("%d",&S);
    printf("Enter the Rate of Interest:");
    scanf("%d",&R);
    printf("Enter the Time Duration:");
    scanf("%d",&T);
        CI=S * pow(1+R, T) -S;
    printf("The chargable Compound interest is: %.21f",CI);
    return(0);
}