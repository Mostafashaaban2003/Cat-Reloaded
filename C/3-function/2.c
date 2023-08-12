#include <stdio.h>
int x = 5;
int y = 8;
void swap();
int main()
{
    swap ();
}
void swap()
{
    int z = x;
    x = y;
    y = z;
    printf(" x = %d, y = %d", x,y);
}

