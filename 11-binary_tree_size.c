#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: The size of the tree, 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_size, left_size;

	if (tree == NULL)
		return (0);

	right_size = binary_tree_size(tree->left);
	left_size = binary_tree_size(tree->right);

	return (right_size + left_size + 1);
}
