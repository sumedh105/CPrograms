#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

struct tree
{
	int data;
	struct tree *left_child;
	struct tree *right_child;
};

static void insert(struct tree **root_node, int data);
static int delete(struct tree **root_node);
static int inorder(struct tree *root_node);
static int preorder(struct tree *root_node);
static int postorder(struct tree *root_node);
static int check_if_bin_tree_is_bst(struct tree *root_node);
static int is_subtree_lesser(struct tree *root_node, int value);
static int is_subtree_greater(struct tree *root_node, int value);

int main()
{
	int choice = 0;
	int data = 0;
	int result = 0;
	struct tree *root_node = NULL;

	while (1)
	{
		printf("\nEnter 0 to exit\n");
		printf("\nEnter 1 to insert a data in the struct tree\n");
		printf("\nEnter 2 to delete the data from the struct tree\n");
		printf("\nEnter 3 to display the struct tree in inorder traversal\n");
		printf("\nEnter 4 to display the struct tree in preorder traversal\n");
		printf("\nEnter 5 to display the struct tree in postorder traversal\n");
		printf("\nEnter 6 to check if a binary tree is a binary search tree\n");
		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 0:
				exit(1);
			case 1:
				printf("\nEnter the data that needs to be inserted in a struct tree\n");
				scanf("%d", &data);
				insert(&root_node, data);
				break;
			case 2:
				data = delete(&root_node);
				printf("\nThe deleted data is: %d\n", data);
				break;
			case 3:
				inorder(root_node);
				break;
			case 4:
				preorder(root_node);
				break;
			case 5:
				postorder(root_node);
				break;
			case 6:
				result = check_if_bin_tree_is_bst(root_node);
				if (result == TRUE)
				{
					printf("\nBinary tree is a binary search tree\n");
				}
				else
				{
					printf("\nBinary tree is not a binary search tree\n");
				}
				break;
			default:
				break;
		}
	}

	return 0;
}

static void insert(struct tree **root_node, int data)
{
	if (*root_node == NULL)
	{
		*root_node = (struct tree *)malloc(sizeof(struct tree *));
		(*root_node)->data = data;
		(*root_node)->left_child = NULL;
		(*root_node)->right_child = NULL;
	}
	else
	{
		if (data < (*root_node)->data)
		{
			insert(&((*root_node)->left_child), data);
		}
		else if (data > (*root_node)->data)
		{
			insert(&((*root_node)->right_child), data);
		}
	}
}

static int delete(struct tree **root_node)
{
	/* Do nothing. */
}

static int inorder(struct tree *root_node)
{
	if (root_node != NULL)
	{
		inorder(root_node->left_child);
		printf("\n%d\n", root_node->data);
		inorder(root_node->right_child);
	}
	else
	{
		return 0;
	}
}

static int preorder(struct tree *root_node)
{
	if (root_node != NULL)
	{
		printf("\n%d\n", root_node->data);
		preorder(root_node->left_child);
		preorder(root_node->right_child);
	}
	else
	{
		return 0;
	}
}

static int postorder(struct tree *root_node)
{
	if (root_node != NULL)
	{
		postorder(root_node->left_child);
		postorder(root_node->right_child);
		printf("\n%d\n", root_node->data);
	}
	else
	{
		return 0;
	}
}

static int check_if_bin_tree_is_bst(struct tree *root_node)
{
	if (root_node == NULL)
	{
		return TRUE;
	}
	if ((is_subtree_lesser(root_node->left_child, root_node->data))
		    && (is_subtree_greater(root_node->right_child, root_node->data))
		    && (check_if_bin_tree_is_bst(root_node->left_child))
		    && (check_if_bin_tree_is_bst(root_node->right_child)))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static int is_subtree_lesser(struct tree *root_node, int value)
{
	if (root_node == NULL)
	{
		return TRUE;
	}
	if ((root_node->data <= value)
	       && (is_subtree_lesser(root_node->left_child, value))
	       && (is_subtree_lesser(root_node->right_child, value)))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static int is_subtree_greater(struct tree *root_node, int value)
{
	if (root_node == NULL)
	{
		return TRUE;
	}
	if ((root_node->data > value)
		&& (is_subtree_greater(root_node->left_child, value))
		&& (is_subtree_greater(root_node->right_child, value)))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
