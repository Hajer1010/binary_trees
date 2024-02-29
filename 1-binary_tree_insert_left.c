#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: ptr to node
 * @value: value
 * Return: ptr
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	if (parent->left)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	parent->left = node;
	return (node);
}
