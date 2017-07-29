#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * binary_tree_sibling - finds sibling
 * @node: node pointer
 * Return: sibling node
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
