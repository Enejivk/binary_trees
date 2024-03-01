#include "binary_trees.h"
/**
 * binary_tree_insert_right- insert node on the right
 * @parent: pointer to the parent node
 * @value: The value to be given the the new node
 * Return: It returns a NewNode
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		NewNode->right = parent->right;
		parent->right->parent = NewNode;
	}
	parent->right = NewNode;
	return (NewNode);
}
