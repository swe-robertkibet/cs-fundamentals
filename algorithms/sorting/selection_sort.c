#include <stdio.h>

void selection_sort(int arr[], int n);

int main(void)
{
    int numbers[] = {7, 2, 5, 4, 1, 6, 0, 3};
    int n = 8;
    
    printf("Unsorted: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    
    selection_sort(numbers, n);
    
    printf("Sorted: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        
        // Swap
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}