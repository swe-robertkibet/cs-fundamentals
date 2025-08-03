#include <cs50.h>
#include <stdio.h>
#include <string.h>

void selection_sort(int array[], int n);

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
    selection_sort(numbers, n);

    // Print sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

// Selection Sort Function
void selection_sort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }

        // Swap if needed
        if (min_index != i)
        {
            int temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
    }
}
