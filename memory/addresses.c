#include <stdio.h>

int main(void)
{
    int n = 50;

    // get the memory address for int n (wherever n is, get the address of it eg 0x45) and assign it to the variable p
    int *p = &n;

    printf("%i\n", n);

    // print the memory address to variable n
    printf("%p\n", p);

    // dereference the pointer to get the value stored for int n
    printf("%i\n", *p);
}