#include <stdio.h>
void Bubblesort(int arr[], int size)
{
    int i, j, k, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    int arr[] =
        {5, 4, 3, 2, 1, 234, 12, 8, 468, 23675653, 5365};
    int size = sizeof(arr) / sizeof(int);
    Bubblesort(arr, size);
    return 0;
}