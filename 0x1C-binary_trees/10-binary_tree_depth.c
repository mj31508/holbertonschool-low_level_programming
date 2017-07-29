#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_depth - measuring the depth of a node
 * @node: pointer to node in binary tree
 *
 * Return: the depth of a node
 **/

size_t binary_tree_depth(const binary_tree_t *node)
{
	int num;
	const binary_tree_t *temp;

	temp = node;
	num = 0;

	if (node == NULL)
		return (0);

	while (temp->parent != NULL)
	{
		temp = temp->parent;
		num += 1;
	}
	return (num);
}
