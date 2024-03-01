
#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    if(parent == NULL)
    {
        parent = GetNewNode(value);
    }
    return parent;
}

binary_tree_t* GetNewNode(int value)
{
    binary_tree_t *NewNode;
    NewNode = (binary_tree_t *) malloc (sizeof(binary_tree_t));
    NewNode->left = NULL;
    NewNode->right = NULL;
    NewNode->n = value;

    return NewNode;
}