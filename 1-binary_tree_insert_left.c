#include "binary_trees.h"
/**
 * binary_tree_insert_left- insert node on the left
 * @parent: pointer to the parent node
 * @value: The value to be given the the new node
 * Return: It returns a NewNode
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	NewNode = binary_tree_node(parent, value);
	if (NewNode == NULL)
	{
		return (NULL);
	}
	if (NewNode->left != NULL)
	{
		NewNode->left = parent->left;
		parent->left->parent = NewNode;
	}
	parent->left = NewNode;
	return (NewNode);
}
