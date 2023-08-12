#include <stdio.h>
void get_length_of_number(int n);
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    get_length_of_number(x);
}
void get_length_of_number(int n)
{
    int length = 0;
    while (n != 0)
    {
        n /= 10;
        length++;
    }
    printf("Length of number is: %d", length);
}