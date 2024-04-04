#include "binary_trees.h"

/**
 * binary_tree_nodes - counting nodes with at least one child
 * @tree: pointer to the root of the node to coun the number of nodes
 *
 * Return: if tree is NULL return 0
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)

{
	size_t nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
	nodes = binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);
	}
	return (nodes);
}
