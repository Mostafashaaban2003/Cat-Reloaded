#include <stdio.h>
int main()
{
    char operator;
    float n1;
    float n2;
    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f%f", &n1, &n2);
    switch (operator)
    {
        case '+': printf("%0.1f + %0.1f = %0.1f", n1, n2, n1+n2); break;
        case '-': printf("%0.1f - %0.1f = %0.1f", n1, n2, n1-n2); break;
        case '*': printf("%0.1f * %0.1f = %0.1f", n1, n2, n1*n2); break;
        case '/': printf("%0.1f / %0.1f = %0.1f", n1, n2, n1/n2); break;

    }
}