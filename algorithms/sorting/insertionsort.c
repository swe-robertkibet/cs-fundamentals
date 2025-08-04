#include <cs50.h>
#include <stdio.h>
#include <string.h>

void insertion_sort(int array[], int n);

int main(void)
{
    int n = get_int("Enter number of elements: ");
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        numbers[i] = get_int("Element %i: ", i + 1);
    }

    insertion_sort(numbers, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

void insertion_sort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }
}
