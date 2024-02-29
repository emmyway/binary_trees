#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - fxn inserts node at left of parent
 * @parent: pointer to parent of node to receive left insert
 * @value: the value of node to be inserted
 * Return: pointer to the modified parent
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		/* make it newnode left child */
		newnode->left = paeent->left;
		/* make newnode the parent of old left child */
		parent-left->parent = newnode;
	}

	/* make newnode the left child of parent */
	parent->left = newnode;

	/* return newnode */
	return (newnode);
}
