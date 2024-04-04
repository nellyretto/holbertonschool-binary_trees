#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree
 *
 * Return: If tree is NULL or is not full (0)
 *	Otherwise (1)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)

		return (0);

	if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL))

		return (0);

	if (!binary_tree_is_full(tree->left) || !binary_tree_is_full(tree->right))

		return (0);

	return (1);
}
