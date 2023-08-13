#include <stdio.h>
#include <math.h>
int main()
{
    double n;
    double power;
    printf("Enter the number: ");
    scanf("%lf", &n);
    printf("Enter a power: ");
    scanf("%lf", &power);
    printf("Answer = %0.0lf", pow(n, power));
}