#include <stdio.h>
int Get_Max(int , int );
int main()
{
    int x,y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Maximum number is: %d", Get_Max(x,y));
}
int Get_Max(int n1, int n2)
{
    if(n1>n2)
    {
        return n1;
    }
    else if(n2>n1)
    {
        return n2;
    }
    
}