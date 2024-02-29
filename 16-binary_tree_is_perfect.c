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
/**
 * binary_tree_is_full - function
 * @tree: ptr
 * Return: full, 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);

		if (left == 0 || right == 0)
			return (0);
		return (1);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_perfect - function
 * @tree: ptr
 * Return: 0, 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int x, y;

	if (!tree)
		return (0);
	if (binary_tree_depth(tree->left) == binary_tree_depth(tree->right))
	{
		x = binary_tree_nodes(tree->left);
		y = binary_tree_nodes(tree->right);
		if (x == y)
			return (1);
	}
	return (0);
}
