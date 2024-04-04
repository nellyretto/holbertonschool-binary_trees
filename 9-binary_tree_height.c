#include "binary_trees.h"

/**
 * binary_tree_height - measuring the height of a binary tree
 * @tree: pointer to root of the node for measuring height
 *
 * Return: Always Success 0
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)

{
size_t  left_size = 0;
	 size_t  right_size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	left_size += + 1 + binary_tree_height(tree->left);

	if (tree->right)
	right_size += + 1 + binary_tree_height(tree->right);

			if (left_size > right_size)
			{
				return (left_size);
			}
			else
			{
				return (right_size);
			}
}
