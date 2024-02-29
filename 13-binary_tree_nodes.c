#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - fxn counts all nodes with atleast 1 child
 * @tree: pointer to root node of tree to be counted
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	/* validate tree */
	if (tree == NULL)
	{
		return 0;
	}

	count = 0;

	if (tree->left != NULL || tree->right != NULL)
	{
		count = 1;
	}
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
