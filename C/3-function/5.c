#include <stdio.h>
void fibo(int n);
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    fibo(x);
}
void fibo(int n)
{
    int a = 0;
    int b = 1;
    int result;
     for(int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        result = a+b;
        a = b;
        b = result;
    }
}