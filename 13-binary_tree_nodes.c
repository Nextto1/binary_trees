#include "binary_trees.h"

/**
 * binary_tree_nodes - It counts the nodes making sure
 * that at least 1 child in a binary tree.
 *@tree:It's a pointer to the root node of the tree.
 * Return: If is NULL,return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		return  (1 + binary_tree_nodes(tree->right) +
			 binary_tree_nodes(tree->left));
	return (0);
}
