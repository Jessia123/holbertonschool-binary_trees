#include "binary_trees.h"
/**
 *binary_tree_node - create a binary trees node
 *@parent: the parent pointer connected to the child
 *@value: the value stored inside the node
 *Return: the node after its been made
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
	{
		printf("malloc fail");
		return (NULL);
	}
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	return (node);
}
