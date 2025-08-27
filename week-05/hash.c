#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    string name;
    string number;
    struct node *next;
}
node;

const int N = 26;
node *table[N];

unsigned int hash(const string word);

int main(void)
{
    // Initialize hash table
    for (int i = 0; i < N; i++)
    {
        table[i] = NULL;
    }
    
    // Add names to hash table
    for (int i = 0; i < 3; i++)
    {
        string name = get_string("Name: ");
        string number = get_string("Number: ");
        
        // Create new node
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->name = name;
        n->number = number;
        n->next = NULL;
        
        // Hash name to get index
        unsigned int index = hash(name);
        
        // Insert at beginning of linked list at that index
        n->next = table[index];
        table[index] = n;
    }
    
    // Search for a name
    string search_name = get_string("Search for: ");
    unsigned int index = hash(search_name);
    
    for (node *ptr = table[index]; ptr != NULL; ptr = ptr->next)
    {
        if (strcmp(ptr->name, search_name) == 0)
        {
            printf("Found: %s\n", ptr->number);
            return 0;
        }
    }
    printf("Not found\n");
    
    // Free memory
    for (int i = 0; i < N; i++)
    {
        node *ptr = table[i];
        while (ptr != NULL)
        {
            node *next = ptr->next;
            free(ptr);
            ptr = next;
        }
    }
}

// Hash function
unsigned int hash(const string word)
{
    return toupper(word[0]) - 'A';
}