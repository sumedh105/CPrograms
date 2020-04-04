#include <stdio.h>
#include <stdlib.h>

struct stackOne
{
	int data;
	struct stackOne *next;
};

struct stackTwo
{
	int data;
	struct stackTwo *next;
};

static void mergeStacks(struct stackOne **stackOneHead, struct stackTwo **stackTwoHead)
{
	struct stackOne *temp = *stackOneHead;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *stackTwoHead;
}

static void pushOne(struct stackOne **stackOneHead, int data)
{
	struct stackOne *temp = NULL;
	struct stackOne *cur = NULL;

	cur = (struct stackOne *)malloc(sizeof(struct stackOne));
	cur->data = data;
	cur->next = NULL;

	if (*stackOneHead == NULL)
	{
		*stackOneHead = cur;	
	}

	else if ((*stackOneHead)->next == NULL)
	{
		(*stackOneHead)->next = cur;
	}

	else
	{
		temp = *stackOneHead;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = cur;
	}
}

static void pushTwo(struct stackTwo **stackTwoHead, int data)
{
	struct stackTwo *temp = NULL;
	struct stackTwo *cur = NULL;

	cur = (struct stackTwo *)malloc(sizeof(struct stackTwo));
	cur->data = data;
	cur->next = NULL;

	if (*stackTwoHead == NULL)
	{
		*stackTwoHead = cur;	
	}

	else if ((*stackTwoHead)->next == NULL)
	{
		(*stackTwoHead)->next = cur;
	}

	else
	{
		temp = *stackTwoHead;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = cur;
	}
}

static int popOne(struct stackOne **head)
{
	int data = 0;
	struct stackOne *temp = NULL;
	struct stackOne *prev = NULL;

	if (*head == NULL)
	{
		printf("\nThe stack is empty, nothing can be popped\n");
		return -1;
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			prev = temp;
			temp = temp->next;
		}

		data = temp->data;
		prev->next = NULL;
		free(temp);

		return data;
	}
}

static int popTwo(struct stackTwo **head)
{
	int data = 0;
	struct stackTwo *temp = NULL;
	struct stackTwo *prev = NULL;

	if (*head == NULL)
	{
		printf("\nThe stack is empty, nothing can be popped\n");
		return -1;
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			prev = temp;
			temp = temp->next;
		}

		data = temp->data;
		prev->next = NULL;
		free(temp);

		return data;
	}
}

static void displayOne(struct stackOne *head)
{
	struct stackOne *temp = head;

	while (temp != NULL)
	{
		printf("\n%d\n", temp->data);
		temp = temp->next;
	}
}

static void displayTwo(struct stackTwo *head)
{
	struct stackTwo *temp = head;

	while (temp != NULL)
	{
		printf("\n%d\n", temp->data);
		temp = temp->next;
	}
}

int main()
{
	int choice = 0;
	struct stackOne *stackOneHead = NULL;
	struct stackTwo *stackTwoHead = NULL;

	while (1)
	{
		printf("\nEnter 1 to push the data in stack one\n");
		printf("\nEnter 2 to push the data in stack two\n");
		printf("\nEnter 3 to pop the data from stack one\n");
		printf("\nEnter 4 to pop the data from stack two\n");
		printf("\nEnter 5 to display the data from stack one\n");
		printf("\nEnter 6 to display the data from stack two\n");
		printf("\nEnter 7 to merge the two stacks\n");

		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch (choice)
		{
			case 0:
			{
				exit(1);
			}

			case 1:
			{
				int data = 0;

				printf("\nEnter the data that needs to be pushed to stack one\n");
				scanf("%d", &data);
				pushOne(&stackOneHead, data);

				break;
			}

			case 2:
			{
				int data = 0;

				printf("\nEnter the data that needs to be pushed to stack one\n");
				scanf("%d", &data);
				pushTwo(&stackTwoHead, data);

				break;
			}

			case 3:
			{
				int data = 0;

				data = popOne(&stackOneHead);
				printf("\nThe popped data from stack one is: %d\n", data);

				break;
			}

			case 4:
			{
				int data = 0;

				data = popTwo(&stackTwoHead);
				printf("\nThe popped data from stack two is: %d\n", data);

				break;
			}

			case 5:
			{
				displayOne(stackOneHead);
				break;
			}

			case 6:
			{
				displayTwo(stackTwoHead);
				break;
			}

			case 7:
			{
				mergeStacks(&stackOneHead, &stackTwoHead);
				break;
			}
		}
	}

	return 0;
}
