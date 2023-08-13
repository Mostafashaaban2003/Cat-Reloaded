#include <stdio.h>
#include <stdbool.h>
int value_of_nth_bit(int number, int bit_order);

int main()
{
    int num;
    int nth_bit;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &nth_bit);

    printf("The %d bit is set to %d", nth_bit, value_of_nth_bit(num, nth_bit));
}

int value_of_nth_bit(int number, int bit_order)
{
     bool out = number&(1<<bit_order);
     return out;
}