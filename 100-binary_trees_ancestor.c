#include "binary_trees.h"

/**
 * binary_trees_ancestor - fxn finds lowest common ancestors of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer common ancestors on success else NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	int depth_first, depth_second;
	const binary_tree_t *temp;

	/* validate node */
	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	/* find depth of each node */
	depth_first = 0;
	depth_second = 0;
	temp = first;

	while (temp)
	{
		depth_first++;
		temp = temp->parent;
	}

	temp = second;
	while (temp)
	{
		depth_second++;
		temp = temp->parent;
	}

	/* make both nodes at the same lebel */
	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}

	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}

	/**
	 * move both nodes up simultaneously until we
	 * find the comon ancesors
	 */
	while (first && second && first != second)
	{
		first = first->parent;
		second = second->parent;
	}

	/* return common ancestor */
	return (first && second ? (binary_tree_t *)first : NULL);
}
