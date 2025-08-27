#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get two strings from user
    char *s = get_string("s: ");
    char *t = get_string("t: ");
    
    // Compare strings using strcmp
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}