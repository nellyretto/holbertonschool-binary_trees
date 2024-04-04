#include "binary_trees.h"

/**
 * binary_tree_size - measuring the size of a binary tree
 * @tree: pointer to root of the node for measuring height
 *
 * Return: is tree is NULL return 0
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)

{
	if (tree == NULL)
	{
		return (0);
	}

		size_t left_size = binary_tree_size(tree->left);
		size_t right_size = binary_tree_size(tree->right);

		return (left_size + right_size + 1);
}
