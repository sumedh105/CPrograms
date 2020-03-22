#include <stdio.h>
#include <stdlib.h>

struct btreenode
{
	struct btreenode *leftchild;
	int data;
	struct btreenode *rightchild;
};

void inorder(struct btreenode *sr);
void preorder(struct btreenode *sr);
void postorder(struct btreenode *sr);
void insert(struct btreenode **sr, int num);

int main()
{
	struct btreenode *bt;
	int num, req;
	int i = 1;

	bt = NULL;

	printf("\nSprcify the number of data items to be inserted\n");
	scanf("%d", &req);

	while (i++ <= req)
	{
		printf("\nEnter the data\n");
		scanf("%d", &num);
		insert(&bt, num);
	}

	printf("\nInorder traversal\n");
	inorder(bt);

	printf("\nPreorder traversal\n");
	preorder(bt);

	printf("\nPostorder traversal\n");
	postorder(bt);

	return 0;
}

void insert(struct btreenode **sr, int num)
{
	if (*sr == NULL)
	{
		*sr = (struct btreenode *)malloc(sizeof(struct btreenode));

		(*sr)->leftchild = NULL;
		(*sr)->data = num;
		(*sr)->rightchild = NULL;
		return;
	}

	else
	{
		if (num < (*sr)->data)
		{
			insert(&((*sr)->leftchild), num);
		}

		else
		{
			insert(&((*sr)->rightchild), num);
		}
	}
}

void inorder(struct btreenode *sr)
{
	if (sr != NULL)
	{
		inorder(sr->leftchild);
		printf("\n%d\n", sr->data);
		inorder(sr->rightchild);
	}

	else
	{
		printf("\nI am here\n");
		return;
	}
}

void preorder(struct btreenode *sr)
{
	if (sr != NULL)
	{
		printf("\n%d\n", sr->data);
		preorder(sr->leftchild);
		preorder(sr->rightchild);
	}

	else
	{
		return;
	}
}

void postorder(struct btreenode *sr)
{
	if (sr != NULL)
	{
		postorder(sr->leftchild);
		postorder(sr->rightchild);
		printf("\n%d\n", sr->data);
	}

	else
	{
		return;
	}
}
