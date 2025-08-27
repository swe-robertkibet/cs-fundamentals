#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int ALPHABET_SIZE = 26;

typedef struct node
{
    bool is_word;
    struct node *children[ALPHABET_SIZE];
}
node;

node *root;

bool search(string word);
void insert(string word);

int main(void)
{
    // Initialize root
    root = malloc(sizeof(node));
    if (root == NULL)
    {
        return 1;
    }
    root->is_word = false;
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        root->children[i] = NULL;
    }
    
    // Insert words
    insert("TOAD");
    insert("TOADETTE");
    insert("MARIO");
    insert("LUIGI");
    
    // Search for words
    string word = get_string("Word: ");
    if (search(word))
    {
        printf("Found\n");
    }
    else
    {
        printf("Not found\n");
    }
    
    // Free memory (simplified - would need recursive function)
    return 0;
}

void insert(string word)
{
    node *current = root;
    
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        int index = word[i] - 'A';
        
        if (current->children[index] == NULL)
        {
            current->children[index] = malloc(sizeof(node));
            current->children[index]->is_word = false;
            for (int j = 0; j < ALPHABET_SIZE; j++)
            {
                current->children[index]->children[j] = NULL;
            }
        }
        
        current = current->children[index];
    }
    
    current->is_word = true;
}

bool search(string word)
{
    node *current = root;
    
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        int index = word[i] - 'A';
        
        if (current->children[index] == NULL)
        {
            return false;
        }
        
        current = current->children[index];
    }
    
    return current->is_word;
}