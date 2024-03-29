#include "binary_trees.h"

/**
 * binary_tree_insert_right - it inserts node to the
 * right-child of another node of the function
 *@parent:It points to the node to insert the right-child.
 *@value: value to store or keep in the new node formed
 * Return: It returns a pointer to the new node created,
 * or NULL on failure or if no.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}
	return (node);
}
