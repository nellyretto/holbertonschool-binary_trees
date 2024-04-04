	#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 * left_height: Height of the left subtree.
 * right_height: Height of the right subtree.
 *
 * Return: if tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check.
 * left_height: Height of the left subtree.
 * right_height: Height of the right subtree.
 *
 * left_perfect: Indicates if the left subtree is perfect.
 *
 * right_perfect: Indicates if the right subtree is perfect.
 *
 * Return: if tree is NULL return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height, left_perfect, right_perfect;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
	{
		left_perfect = binary_tree_is_perfect(tree->left);
		right_perfect = binary_tree_is_perfect(tree->right);

		return (left_perfect && right_perfect);
	}

	return (0);
}
