#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void push(struct node **, int);
int pop(struct node **);
void display(struct node *);

int main()
{
	int choice = 0;
	int num = 0;
	int result = 0;
	struct node *root = NULL;

	printf("\nEnter 1 to push an element in the stack\n");
	printf("\nEnter 2 to pop an element from the stack\n");
	printf("\nEnter 3 to display the stack contents\n");
	printf("\nEnter 4 to exit\n");

	while (1)
	{
		printf("\nEnter your choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("\nEnter a number that needs to be pushed in the stack\n");
				scanf("%d", &num);
				push(&root, num);
				break;
			case 2:
				result = pop(&root);
				printf("\nThe popped element from the stack is: %d\n", result);
				break;
			case 3:
				display(root);
				break;
			case 4:
				exit(0);
			default:
				break;
		}
	}	

	return 0;
}

void push(struct node **rootNode, int num)
{
	struct node *cur;
	struct node *temp;
	cur = *rootNode;

	if (*rootNode == NULL)
	{
		*rootNode = (struct node *)malloc(sizeof(struct node));
		(*rootNode)->data = num;
		(*rootNode)->next = NULL;
	}
	else
	{
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = num;
		temp-> next = NULL;

		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = temp;
	}
}

int pop(struct node **rootNode)
{
	struct node *cur, *prev;
	int result = 0;
	cur = *rootNode;
	prev = *rootNode;

	if (*rootNode == NULL)
	{
		printf("\nThe stack is empty, nothing to be removed from the stack\n");
	}
	else if ((*rootNode)->next == NULL)
	{
		result = (*rootNode)->data;
		*rootNode = NULL;
	}
	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		
		while (prev->next != cur)
		{
			prev = prev->next;
		}
		result = cur->data;
		free(cur);
		prev->next = NULL;
	}

	return result;
}

void display(struct node *rootNode)
{
	struct node *cur;
	
	cur = rootNode;

	if (rootNode == NULL)
	{
		printf("\nThe stack is empty, nothing to be displayed\n");
	}
	else
	{
		printf("\nThe stack contents are:\n");
		while (cur != NULL)
		{
			printf("\ncur->data: %d\n", cur->data);
			cur = cur->next;
		}
	}
}
