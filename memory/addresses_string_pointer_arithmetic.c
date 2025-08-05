#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *s = "HI!";

    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%c\n", *(s + 3));

    // printing specific point of string to the end e.g from I to ! so its "I!"
    printf("%s\n", s + 1);


}