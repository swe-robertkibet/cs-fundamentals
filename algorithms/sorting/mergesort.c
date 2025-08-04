#include <cs50.h>
#include <stdio.h>
#include <string.h>

void merge_sort(int array[], int left, int right);
void merge(int array[], int left, int mid, int right);

int main(void)
{
    // Get number of elements
    int n = get_int("Enter number of elements: ");
    int numbers[n];

    // Get elements from user
    for (int i = 0; i < n; i++)
    {
        numbers[i] = get_int("Element %i: ", i + 1);
    }

    // Sort the array
    merge_sort(numbers, 0, n - 1);

    // Print sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

// Merge Sort Function
void merge_sort(int array[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        // Sort left half
        merge_sort(array, left, mid);

        // Sort right half
        merge_sort(array, mid + 1, right);

        // Merge both halves
        merge(array, left, mid, right);
    }
}

// Merge Function
void merge(int array[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary arrays
    int L[n1], R[n2];

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++)
        L[i] = array[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];

    // Merge the temp arrays back into array[]
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        array[k] = R[j];
        j++;
        k++;
    }
}
