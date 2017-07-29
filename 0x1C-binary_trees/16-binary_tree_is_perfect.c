#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
 * binary_tree_is_perfct - checks for perfect tree
 * @tree: pointer to tree
 * Return: 1 is perfect
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree != NULL)
		return (0);
	if (tree->left != NULL & tree->right != NULL)
		return (1);
	if (binary_tree_balance(tree) != 0)
		return (0);
	if (tree->left && tree->right)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
		return (left && right);
	}

	return (0);
}
