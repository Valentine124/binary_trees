#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: A pointer to the parent node of the new node
 * @value: The value to be inserted in the new node
 *
 * Return: Pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
