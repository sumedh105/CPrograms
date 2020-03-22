#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void enqueue(struct node **, int);
int dequeue(struct node **);
void display(struct node *);

int main()
{
	int choice = 0;
	int num = 0;
	int result = 0;
	struct node *rootNode = NULL;

	printf("\nEnter 1 to enqueue\n");
	printf("\nEnter 2 to dequeue\n");
	printf("\nEnter 3 to display the conents of the queue\n");
	printf("\nEnter 4 to exit\n");

	while (1)
	{
		printf("\nEnter your choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("\nEnter the number thae needs to be enqueued\n");
				scanf("%d", &num);
				enqueue(&rootNode, num);
				break;
			case 2:
				result = dequeue(&rootNode);
				printf("\nThe dequeued elemet is: %d\n", result);
				break;
			case 3:
				display(rootNode);
				break;
			case 4:
				exit(0);
			default:
				break;
		}
	}

	return 0;
}

void enqueue(struct node **rootNode, int num)
{
	struct node *front, *rear, *temp;
	front = *rootNode;
	rear = *rootNode;

	if (*rootNode == NULL)
	{
		(*rootNode) = (struct node *)malloc(sizeof(struct node));
		(*rootNode)->data = num;
		(*rootNode)->next = NULL;
	}

	else
	{
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = num;
		temp->next = NULL;
		while (rear->next != NULL)
		{
			rear = rear->next;
		}
		rear->next = temp;
		rear = temp;
	}
}

int dequeue(struct node **rootNode)
{
	int result = 0;
	struct node *front, *rear;
	front = *rootNode;
	rear = *rootNode;

	if (*rootNode == NULL)
	{
		printf("\nThe queue is empty, nothing can be removed\n");
		return 0;
	}

	else if ((*rootNode)->next == NULL)
	{
		result = (*rootNode)->data;
		*rootNode = NULL;
		return result;
	}

	else
	{
		result = front->data;
		front = front->next;
		*rootNode = front;
		return result;
	}
}

void display(struct node *rootNode)
{
	struct node *cur;
	cur = rootNode;

	if (rootNode == NULL)
	{
		printf("\nThe queue is empty, there is nothing to be displayed\n");
	}
	else
	{
		while (cur != NULL)
		{
			printf("\nThe queue contents are: %d\n", cur->data);
			cur = cur->next;
		}
	}
}
