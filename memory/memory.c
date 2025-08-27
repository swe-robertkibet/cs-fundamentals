#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Allocate memory for array of 3 integers
    int *x = malloc(3 * sizeof(int));
    
    // Bug 1: Array indexing should start at 0, not 1
    // Bug 2: No free() call - memory leak
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;  // Buffer overflow! Should be x[2]
    
    // Missing: free(x);
}