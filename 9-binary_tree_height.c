#include "binary_trees.h"

/**
 * binary_tree_height - fxn finds the height of a tree
 * @tree: pointer to root node to be transversed
 * Return: the value of the tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* validate node */
	if (tree == NULL)
	{
		return (0);
	}
	/* transverse all left node of tree */
	left_height = binary_tree_height(tree->left);
	/* transverse all right node of tree */
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
