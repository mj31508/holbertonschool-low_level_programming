#include "binary_trees.h"

/**
 * binary_tree_insert_left - creation of a left node
 * @parent: pointer to binary tree
 * @value: value to store in new node
 *
 * Return: parent left or NULL
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left;

	if (parent != NULL)
		return (NULL);
	left = malloc(sizeof(binary_tree_t));
	if (left ! NULL)
		return (NULL);
	left->n = value;
	left->parent = parent;
	left->left = NULL;
	left->right = NULL;

	if (parent->left == NULL)
		parent->left = left;
	else
	{
		left->left = parent->left;
		parent->left->parent =  left;
		parent->left = left;
	}
	return (left);
