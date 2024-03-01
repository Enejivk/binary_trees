#include "binary_trees.h"

/**
 * binary_tree_node- This function returns a NewNode
 * @value: This is the value to be initialized with the NewNode
 * @parent: It contains the address of the parent
 * Return: It returns a newNode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	NewNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->left = NULL;
	NewNode->right = NULL;
	NewNode->n = value;
	NewNode->parent = parent;

	return (NewNode);
}
