#include <cs50.h>
#include <stdio.h>
#include <string.h>

void quick_sort(int array[], int low, int high);
int partition(int array[], int low, int high);

int main(void)
{
    int n = get_int("Enter number of elements: ");
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        numbers[i] = get_int("Element %i: ", i + 1);
    }

    quick_sort(numbers, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

void quick_sort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);
        quick_sort(array, low, pi - 1);
        quick_sort(array, pi + 1, high);
    }
}

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    int temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;

    return i + 1;
}
