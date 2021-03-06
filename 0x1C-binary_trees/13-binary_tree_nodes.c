#include "binary_trees.h"

/**
 * binary_tree_nodes - node count function
 * @tree: meaurment of tree
 *
 * Return: num of child nodes
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL && tree->right != NULL)
	{
		return (1);
	}
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
