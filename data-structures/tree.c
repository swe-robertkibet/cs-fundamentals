#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

bool search(node *tree, int number);

int main(void)
{
    // Manually create a tree for illustration
    node *tree = malloc(sizeof(node));
    if (tree == NULL)
    {
        return 1;
    }
    tree->number = 4;
    tree->left = malloc(sizeof(node));
    tree->right = malloc(sizeof(node));
    
    tree->left->number = 2;
    tree->left->left = malloc(sizeof(node));
    tree->left->right = malloc(sizeof(node));
    
    tree->right->number = 6;
    tree->right->left = malloc(sizeof(node));
    tree->right->right = malloc(sizeof(node));
    
    tree->left->left->number = 1;
    tree->left->left->left = NULL;
    tree->left->left->right = NULL;
    
    tree->left->right->number = 3;
    tree->left->right->left = NULL;
    tree->left->right->right = NULL;
    
    tree->right->left->number = 5;
    tree->right->left->left = NULL;
    tree->right->left->right = NULL;
    
    tree->right->right->number = 7;
    tree->right->right->left = NULL;
    tree->right->right->right = NULL;
    
    // Search for a number
    int number = get_int("Number: ");
    if (search(tree, number))
    {
        printf("Found\n");
    }
    else
    {
        printf("Not found\n");
    }
    
    // Free memory (would need recursive function in real code)
    free(tree->left->left);
    free(tree->left->right);
    free(tree->right->left);
    free(tree->right->right);
    free(tree->left);
    free(tree->right);
    free(tree);
}

bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    else
    {
        return true;
    }
}