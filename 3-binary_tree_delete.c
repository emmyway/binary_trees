#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - fxn deletes a binary tree
 * @tree: pointer to root node of tree to be deleted
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* validate tree */
	if (tree == NULL)
	{
		return;
	}

	/* delete the left subtree */
	binary_tree_delete(tree->left);

	/* delete the right subtree */
	binary_tree_delete(tree->right);

	/* free memory for the current node */
	free(tree);
}
