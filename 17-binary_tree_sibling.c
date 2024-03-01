#include "binary_trees.h"

/**
 * binary_tree_sibling - fxn finds sibling of given node
 * @node: pointer to node to return its sibling
 * Return: pointernto sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* validate node */
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *parent = node->parent;

	/* check if node is the left child */
	if (parent->left == node)
	{
		/* if right chikd exists, retun it */
		if (parent->right != NULL)
		{
			return (parent->right);
		}
		else
		{
			return (NULL);
		}
	}
	else /* node is the right child */
	{ /* if left child exists return it */
		if (parent->left != NULL)
		{
			return (parent->left);
		}
		else
		{
			return (NULL);
		}
	}
}
