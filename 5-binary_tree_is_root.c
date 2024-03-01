#include "binary_trees.h"

/**
 * binary_tree_is_root - fxn cjecks if node is a root node
 * @node: pointer to node to be checked
 * Return: 1 on success else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* validate node */
	if (node == NULL)
	{
		return (0);
	}
	/* check if node has a parent */
	if (node->parent == NULL)
	{
		return (1);
	}
	/* else */
	return (0);
}
