#include <stdio.h>
int main()
{
    int size;
    int even = 0;
    int odd = 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements in array: ", size);
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2 == 0) even++;
        else odd++;
    }
    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d\n", odd);
}