#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &num);
    while(num)
    {
        sum += num%10;
        num/=10;
    }
    printf("Sum of digits = %d", sum);
}