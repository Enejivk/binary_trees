#include "binary_trees.h"
/**
 * binary_tree_delete- Deleting an entire tree
 * @tree: pointer to the root of the tree to be deleted
 * free: This is a function that delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
