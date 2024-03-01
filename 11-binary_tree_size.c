#include "binary_trees.h"

/**
 * binary_tree_size - fxn measure the size of a tree
 * @tree: pointer to root node of tree to be measured
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	/* validate tree */
	if (tree == NULL)
	{
		return (0);
	}

	/* calculate the left subtree size*/
	left_size = binary_tree_size(tree->left);

	/* calculate the right subtree size*/
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
