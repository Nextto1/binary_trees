#include "binary_trees.h"
/**
 * binary_tree_height - It weighs the height of a binary tree.
 *@tree:It is a pointer to the root node of the tree
 *to weighs the height.
 * Return: if  is NULL return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 1, right = 1;

		if (tree->right)
			right +=  binary_tree_height(tree->right);
		if (tree->left)
			left +=  binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
/**
 * binary_tree_balance - weighs the balance factor of a binary tree.
 *@tree: It is a pointer to the root node of the tree
 *to weigh the balance factor.
 * Return: If is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}
