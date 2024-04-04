#include "binary_trees.h"
/**
 * binary_tree_balance - measuring the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: if tree is NULL return 0, if not return the balance factor of the binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_size = 0;
        int right_size = 0;

	if (tree == NULL)

		return (0);

	left_size = binary_tree_height(tree->left);
	right_size = binary_tree_height(tree->right);
	
	return (left_size - right_size);
}

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
	left_size = binary_tree_height(tree->left);

	if (tree->right)
	right_size = binary_tree_height(tree->right);

	return (left_size > right_size ? left_size : right_size) + 1;
}
