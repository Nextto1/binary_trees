#include "binary_trees.h"

/**
 * binary_tree_height - It measures the height of the
 * binary tree for the function
 *@tree:It's a pointer to the root node of the tree
 * to be measured.
 * Return: if the measured tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
