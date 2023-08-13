#include <stdio.h>
int convert_binary_to_decimal(long long binary_number);

int main()
{
    long long bin_number;
    int decimal_number;

    printf("Enter a binary number: ");
    scanf("%lld", &bin_number);

    decimal_number = convert_binary_to_decimal(bin_number);
    printf("%lld in binary = %d in decimal", bin_number, decimal_number);
}

int convert_binary_to_decimal(long long binary_number)
{
    int mul = 1;
    int dec_number = 0;
    while(binary_number)
    {
       dec_number += binary_number%10 * mul;
       binary_number /= 10;
       mul *= 2;
    }
    return dec_number;
}