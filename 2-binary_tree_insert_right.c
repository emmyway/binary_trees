#include "binary_trees.h"

/**
 * binary_tree_insert_right - fxn inserts node at right of parent
 * @parent: pointer to parent of node to receive right insert
 * @value: the value of node to be inserted
 * Return: pointer to the modified parent
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	/* return NULL if parent is NULL */
	if (parent == NULL)
	{
		return (NULL);
	}

	/* creates a new node */
	newnode = binary_tree_node(parent, value);

	/* return NULL if newnode is NULL */
	if (newnode == NULL)
	{
		return (NULL);
	}

	/* if parrent has a left child */
	if (parent->right != NULL)
	{
		/* make it newnode right child */
		newnode->right = parent->right;
		/* make newnode the parent of old right child */
		parent->right->parent = newnode;
	}

	/* make newnode the right child of parent */
	parent->right = newnode;

	/* return newnode */
	return (newnode);
}
