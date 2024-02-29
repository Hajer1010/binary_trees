#include "binary_trees.h"
/**
 * binary_tree_postorder - function
 * @tree: ptr
 * @func: ptr
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
}
