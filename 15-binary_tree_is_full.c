#include "binary_trees.h"

/**
 * binary_tree_is_full - fxn deletes a binary tree
 * @tree: pointer to root node of tree to be checked
 * Return: 1 on success else 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* validate tree */
	if (tree == NULL)
	{
		return (0);
	}

	/* if tree is a leaf node return 1 */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/**
	 * if tree had botu children, also check if
	 * both subtrees are full
	 */
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
