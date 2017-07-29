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
	binary_tree_t *new_node;


	temp_var = parent;
	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = temp;
	new_node->left = NULL;
	new_node->right = NULL;
	if (temp_var->left == NULL)
	{
		temp_var->left = new_node;
	}
	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
	}
	return (new_node);
}
