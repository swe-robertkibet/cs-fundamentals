#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    
    // Print the value of n
    printf("%i\n", n);
    
    // Print the address of n (what's stored in p)
    printf("%p\n", p);
    
    // Print the value at the address stored in p (dereference)
    printf("%i\n", *p);
}