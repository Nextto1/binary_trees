#include "binary_trees.h"

/**
 * binary_tree_depth - It measures the depth of the
 * node in a binary tree.
 *@tree: It's a pointer to the node to measure the depth.
 * Return: if the binary tree is NULL,return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
