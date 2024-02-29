#include "binary_trees.h"
/**
 * binary_tree_depth - function
 * @tree: ptr
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}
