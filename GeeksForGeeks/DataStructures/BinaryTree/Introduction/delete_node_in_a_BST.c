#include <stdio.h>
#include <stdlib.h>

struct tree
{
	int data;
	struct tree *left_child;
	struct tree *right_child;
};

struct tree *insert(struct tree *root_node, int data);
struct tree *delete(struct tree *root_node, int data);
static int inorder(struct tree *root_node);
static int preorder(struct tree *root_node);
static int postorder(struct tree *root_node);
struct tree *get_new_node(int);
struct tree *get_minimum(struct tree *root_node);

int main()
{
	int choice = 0;
	int data = 0;
	struct tree *root_node = NULL;

	while (1)
	{
		printf("\nEnter 0 to exit\n");
		printf("\nEnter 1 to insert a data in the struct tree\n");
		printf("\nEnter 2 to delete the data from the struct tree\n");
		printf("\nEnter 3 to display the struct tree in inorder traversal\n");
		printf("\nEnter 4 to display the struct tree in preorder traversal\n");
		printf("\nEnter 5 to display the struct tree in postorder traversal\n");
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
				printf("\nEnter the data in the node that needs to be deleted\n");
				scanf("%d", &data);
				root_node = delete(root_node, data);
				printf("\nThe deleted data is: %d\n", root_node->data);
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

struct tree *get_minimum(struct tree *root_node)
{
	struct tree *temp = root_node;
	while (temp->left_child != NULL)
	{
		temp = temp->left_child;
	}

	return temp;
}

struct tree *delete(struct tree *root_node, int data)
{
	if (root_node == NULL)
	{
		return root_node;
	}	
	else if (data < root_node->data)
	{
		root_node->left_child = delete(root_node->left_child, data);
	}
	else if (data > root_node->data)
	{
		root_node->right_child = delete(root_node->right_child, data);
	}
	else if (data == root_node->data)
	{
		if ((root_node->left_child == NULL) && (root_node->right_child == NULL))
		{
			free(root_node);
			root_node = NULL;
			return root_node;
		}
		else if ((root_node->left_child == NULL) && (root_node->right_child != NULL))
		{
			struct tree *temp = root_node;
			root_node = root_node->right_child;
			free(temp);
			return root_node;
		}
		else if ((root_node->left_child != NULL) && (root_node->right_child == NULL))
		{
			struct tree *temp = root_node;
			root_node = root_node->left_child;
			free(temp);
			return root_node;
		}
		else if ((root_node->left_child != NULL) && (root_node->right_child != NULL))
		{
			struct tree *temp = get_minimum(root_node->right_child);
			root_node->data = temp->data;
			root_node->right_child = delete(root_node->right_child, temp->data);
			return root_node;
		}
	}
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
