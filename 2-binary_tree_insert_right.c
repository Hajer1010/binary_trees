#include "binary_trees.h"
/**
 * *binary_tree_insert_right - function
 * @parent: ptr
 * @value: value
 * Return: ptr
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	if (parent->right)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;

	return (node);
}
