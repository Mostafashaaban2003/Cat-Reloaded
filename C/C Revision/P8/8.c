#include <stdio.h>
void Max_Min_Value_Array(int arr[], int arr_size, int *pMax,int *pMin);
int main()
{
    int size;
    int max = 0;
    int min = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d elements in array: ", size);
    for (int i = 0; i < size; ++i) scanf("%d", &array[i]);

    Max_Min_Value_Array(array, size, &max, &min);

    printf("Maximum Element in array: %d\n",max);
    printf("Minimum Element in array: %d\n",min);
}
void Max_Min_Value_Array(int arr[], int arr_size, int *pMax,int *pMin)
{
    *pMax = arr[0];
    *pMin = arr[0];
    for(int i = 0; i < arr_size; ++i)
    {
        if(*pMin > arr[i]) *pMin = arr[i];
        if(*pMax < arr[i]) *pMax = arr[i];
    }
}
