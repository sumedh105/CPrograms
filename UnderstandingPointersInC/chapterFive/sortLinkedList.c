#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void insertNodeAtBeg(struct node **, int num);
void deleteFromBeg(struct node **);
void sortLinkedList(struct node **);
void display(struct node *);

int main()
{
	int choice = 0;
	int num = 0;
	int loc = 0;
	struct node *root = NULL;

	printf("\nPress 1 to insert a node at the beginning into the linked list\n");
	printf("\nPress 2 to remove a node from the beginning from the linked list\n");
	printf("\nPress 3 to display the linked list\n");
	printf("\nPress 4 to sort the linked list\n");
	printf("\nPress 5 to exit\n");

	while (1)
	{
		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				printf("\nEnter a number that needs to be inserted\n");
				scanf("%d", &num);
				insertNodeAtBeg(&root, num);
				break;

			case 2:
				deleteFromBeg(&root);
				break;

			case 3:
				display(root);
				break;

			case 4:
				sortLinkedList(&root);
				break;

			case 5:
				exit(0);

			default:
				break;

		}

	}

	return 0;
}

void insertNodeAtBeg (struct node **rootNode, int num)
{
	struct node *cur;
	struct node *prev;

	if (*rootNode == NULL)
	{
		*rootNode = (struct node *)malloc(sizeof(struct node));
		if (*rootNode == NULL)
		{
			printf("\nMemory cannot be allocated\n");
		}
		else
		{
			(*rootNode)->data = num;
			(*rootNode)->next = NULL;
		}
	}
	else
	{
		cur = (struct node *)malloc(sizeof(struct node));
		cur->data = num;
		cur->next = *rootNode;
		*rootNode = cur;
	}
}

void deleteFromBeg(struct node **rootNode)
{
	struct node *cur;
	struct node *prev;

	if (*rootNode == NULL)
	{
		printf("\nThe list is empty, nothing can be deleted\n");
	}
	else
	{
		cur = *rootNode;
		prev = *rootNode;

		*rootNode = cur->next;
		cur->next = NULL;
	}
}

void sortLinkedList(struct node **rootNode)
{
	struct node *cur, *prev, *temp;
	int tempData = 0;
	cur = *rootNode;
	prev = *rootNode;
	temp = *rootNode;

	if (*rootNode == NULL)
	{
		printf("\nThe list is empty, nothing is there to be sorted\n");
	}
	else
	{
		while (prev->next != NULL)
		{
			cur = prev->next;
			while (cur != NULL)
			{
				if (prev->data > cur->data)
				{
					tempData = cur->data;
					cur->data = prev->data;
					prev->data = tempData;
				}
				else
				{
					/* Do nothing. */
				}

				cur = cur->next;
			}
			prev = prev->next;
		}
	}
}

void display(struct node *rootNode)
{
	struct node *cur;
	cur = rootNode;

	if (rootNode == NULL)
	{
		printf("\nThe list is empty, there is nothing to display\n");
	}

	else
	{
		while (cur != NULL)
		{
			printf("\ncur->data:%d\n", cur->data);
			cur = cur->next;
		}
	}
}
