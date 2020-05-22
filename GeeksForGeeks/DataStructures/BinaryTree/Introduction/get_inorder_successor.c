#include <stdio.h>
#include <stdlib.h>

struct tree
{
	int data;
	struct tree *left_child;
	struct tree *right_child;
};

struct tree *insert(struct tree *root_node, int data);
static int delete(struct tree **root_node);
static int inorder(struct tree *root_node);
static int preorder(struct tree *root_node);
static int postorder(struct tree *root_node);
struct tree *get_new_node(int);
struct tree *get_inorder_successor(struct tree *root_node, int data);
struct tree *get_min(struct tree *node);
struct tree *get_current(struct tree *node, int data);

int main()
{
	int choice = 0;
	int data = 0;
	struct tree *root_node = NULL;
	struct tree *node = NULL;

	while (1)
	{
		printf("\nEnter 0 to exit\n");
		printf("\nEnter 1 to insert a data in the struct tree\n");
		printf("\nEnter 2 to delete the data from the struct tree\n");
		printf("\nEnter 3 to display the struct tree in inorder traversal\n");
		printf("\nEnter 4 to display the struct tree in preorder traversal\n");
		printf("\nEnter 5 to display the struct tree in postorder traversal\n");
		printf("\nEnter 6 to get the successor of inorder traversal\n");
		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 0:
				exit(1);
			case 1:
				printf("\nEnter the data that needs to be inserted in a struct tree\n");
				scanf("%d", &data);
				root_node = insert(root_node, data);
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
				node = get_inorder_successor(root_node, 8);
				printf("\nThe inorder successor is: %d\n", node->data);
				node = get_inorder_successor(root_node, 12);
				printf("\nThe inorder successor is: %d\n", node->data);
				break;
			default:
				break;
		}
	}

	return 0;
}

struct tree *get_new_node(int data)
{
	struct tree *root = NULL;

	root = (struct tree *)malloc(sizeof(struct tree));
	root->data = data;
	root->left_child = NULL;
	root->right_child = NULL;

	return root;
}

struct tree *insert(struct tree *root_node, int data)
{
	if (root_node == NULL)
	{
		root_node = get_new_node(data);
	}
	else
	{
		if (data < root_node->data)
		{
			root_node->left_child = insert(root_node->left_child, data);
		}
		else if (data > root_node->data)
		{
			root_node->right_child = insert(root_node->right_child, data);
		}
	}

	return root_node;
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

struct tree *get_inorder_successor(struct tree *root_node, int data)
{
	struct tree *current = get_current(root_node, data); 

	if (current == NULL)
	{
		return NULL;
	}

	/* Case 1: right subtree is present (not null) */
	if (current->right_child != NULL)
	{
		return get_min(current->right_child);
	}

	/* Case 2: right subtree is not present (right subtree is null) */
	else
	{
		struct tree *ancestor = root_node;
		struct tree *successor = NULL;

		while (ancestor != current)
		{
			if (current->data < ancestor->data)
			{
				successor = ancestor;
				ancestor = ancestor->left_child;
			}
			else
			{
				ancestor = ancestor->right_child;
			}
		}
		return successor;
	}
}

struct tree *get_min(struct tree *node)
{
	if (node == NULL)
	{
		return NULL;
	}
	while (node->left_child != NULL)
	{
		node = node->left_child;
	}
	return node;
}

struct tree *get_current(struct tree *node, int data)
{
	struct tree *current_node = NULL;

	if (node == NULL)
	{
		return NULL;
	}
	else
	{
		if (data == node->data)
		{
			return node;
		}
		if (data < node->data)
		{
			return get_current(node->left_child, data);
		}
		else
		{
			return get_current(node->right_child, data);
		}
	}
}
