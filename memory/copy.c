#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string from user
    string s = get_string("s: ");
    
    // Check for null string
    if (s == NULL)
    {
        return 1;
    }
    
    // Allocate memory for copy
    string t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }
    
    // Copy string using strcpy
    strcpy(t, s);
    
    // Capitalize first letter of copy only if string is not empty
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    
    // Print both strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    
    // Free allocated memory
    free(t);
    
    return 0;
}