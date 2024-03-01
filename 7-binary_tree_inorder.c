#include "binary_trees.h"

/**
 * binary_tree_inorder - fxn transverses a tree in 'in-order'
 * @tree: pointer to root node to be transversed
 * func: function pointer that takes int param
 * the int param is a value contained in current node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* validate node */
	if (tree == NULL || func == NULL)
	{
		return;
	}
	/* transverse all left node of tree */
	binary_tree_inorder(tree->left, func);
	/* perform action as required by func */
	func(tree->n);
	/* transverse all right node of tree */
	binary_tree_inorder(tree->right, func);
}
