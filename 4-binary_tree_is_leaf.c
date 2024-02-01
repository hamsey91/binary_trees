#include "binary_trees.h"

/**
 * binary_tree_is_leaf - The function that checks if a node is a leaf.
 *
 * @node: Pointer to the node to check.
 *
 * Return:  If node is a leaf return 1.
 *          If not leaf or node is NULL return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
