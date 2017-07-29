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
	binary_tree_t *temp_var;

	if(parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	else {
		temp_var = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = temp_var;
	}
	return (parent->left);
}
