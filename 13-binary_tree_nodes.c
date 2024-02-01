#include "binary_trees.h"

/**
 * binary_tree_nodes - The function that counts the nodes
 *		with at least 1 child in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count the num of nodes.
 *
 * Return: The number of nodes in tree or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes = 0;

	if (tree != NULL)
	{
		num_nodes += (tree->left || tree->right) ? 1 : 0;
		num_nodes += binary_tree_nodes(tree->left);
		num_nodes += binary_tree_nodes(tree->right);
	}
	return (num_nodes);
}
