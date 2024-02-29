#include "binary_trees.h"
/**
 * binary_tree_is_root - function
 * @node: node
 * Return: 0, 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
