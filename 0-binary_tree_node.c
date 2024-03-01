#include "binary_trees.h"
/**
 * binary_tree_node- This return a node that will be link to the parent NOode
 * @parent: It contains the address of the parent
 * @value: This contain the value
 * Return: It return a root node;
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = GetNewNode(value, parent);

	return (new);
}

/**
 * GetNewNode- This function returns a NewNode
 * @value: This is the value to be initialized with the NewNode
 * @parent: It contains the address of the parent
 * Return: It returns a newNode
 */
binary_tree_t *GetNewNode(int value, binary_tree_t *parent)
{
	binary_tree_t *NewNode;

	NewNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (NewNode == NULL)
	{
		perror("malloc failed");
		return (NULL);
	}
	NewNode->left = NULL;
	NewNode->right = NULL;
	NewNode->n = value;
	NewNode->parent = parent;

	return (NewNode);
}
