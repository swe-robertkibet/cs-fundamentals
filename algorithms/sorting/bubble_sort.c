#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int arr[], int n);

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
    
    bubble_sort(numbers, n);
    
    printf("Sorted: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        
        // Optimization: if no swaps occurred, array is sorted
        if (!swapped)
        {
            break;
        }
    }
}