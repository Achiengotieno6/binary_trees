#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a binary tree.
 * @tree: Pointer to the root node of the tree to count leaves.
 *
 * Return: The number of leaf nodes, 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	right_leaves = binary_tree_leaves(tree->right);
	left_leaves = binary_tree_leaves(tree->left);

	return (left_leaves + right_leaves);
}
