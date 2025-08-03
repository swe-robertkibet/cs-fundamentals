#include <cs50.h>
#include <stdio.h>
#include <string.h>

void bubble_sort(int array[], int n);

int main(void)
{
    // Get number of elements
    int n = get_int("Enter number of elements: ");

    // Declare array
    int numbers[n];

    // Get elements from user
    for (int i = 0; i < n; i++)
    {
        numbers[i] = get_int("Element %i: ", i + 1);
    }

    // Sort the array
    bubble_sort(numbers, n);

    // Print sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

// Bubble Sort Function
void bubble_sort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Track if any swaps were made this pass
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swap
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }

        // If no swaps, array is already sorted
        if (!swapped)
        {
            break;
        }
    }
}
