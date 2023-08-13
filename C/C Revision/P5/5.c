#include <stdio.h>
int find_max_and_min(int n[]);

int main()
{
    int arr[4];
    for(int i = 0; i < 4; i++) scanf("%d", &arr[i]);
    find_max_and_min(arr);
}
int find_max_and_min(int n[])
{
    int max = n[0];
    int min = n[0];
    for(int i = 1; i < 4; i++)
    {
        if (max < n[i]) max = n[i];
        if (min > n[i]) min = n[i];
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
}