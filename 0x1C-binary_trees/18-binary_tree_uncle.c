#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle node
 * @node: node pointer
 * Return: Uncle node
 **/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->parent->left->right)
	{
		return (node->parent->parent->right);
	}
	else if (node == node->parent->parent->left->left)
	{
		return (node->parent->parent->right);
	}
	else if (node == node->parent->parent->right->left)
	{
		return (node->parent->parent->left);
	}
	return (node->parent->parent->left);
}
