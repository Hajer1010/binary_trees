#include "binary_trees.h"
/**
 * binary_tree_high - function
 * @tree: ptr
 * Return: height
 */
size_t binary_tree_high(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0;

	if (!tree)
		return (0);
	left_h = binary_tree_high(tree->left);
	right_h = binary_tree_high(tree->right);

	return (1 + (left_h > right_h ? left_h : right_h));
}
/**
 * binary_tree_balance - function
 * @tree: ptr
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_h = 0, left_h = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_h = binary_tree_high(tree->left);
	if (tree->right)
		right_h = binary_tree_high(tree->right);

	return (left_h - right_h);
}

