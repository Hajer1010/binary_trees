#include "binary_trees.h"
/**
 * binary_tree_nodes - function
 * @tree: ptr
 * Return: 0 , number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		node++;

	node += binary_tree_nodes(tree->left);
	node += binary_tree_nodes(tree->right);

	return (node);
}
