#include "binary_trees.h"

/**
 * binary_tree_depth - measuring the depth of a node on a binary tree
 * @tree: pointer to node of measured depth
 *
 * Return: if tree is NULL return 0
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)

{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree && tree->parent)
	return (1 + binary_tree_depth(tree->parent));

	else
		return (0);
}

