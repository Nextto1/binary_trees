#include "binary_trees.h"

/**
 * binary_tree_delete - It deletes an entire binary tree
 * from the function
 *@tree:It points to the root node of the tree to delete
 * from the function
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
