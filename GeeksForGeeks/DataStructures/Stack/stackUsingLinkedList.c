#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int data;
	struct stack *next;
};

static void push(struct stack **st, int data)
{
	struct stack *temp = NULL;
	struct stack *cur = NULL;

	temp = (struct stack *)malloc(sizeof(struct stack));
	temp->data = data;
	temp->next = NULL;

	if (*st == NULL)
	{
		*st = temp;
	}

	else if ((*st)->next == NULL)
	{
		(*st)->next = temp;
		temp->next = NULL;
	}

	else
	{
		cur = *st;

		while (cur->next != NULL)
		{
			cur = cur->next;
		}

		cur->next = temp;
	}
}

static int pop(struct stack **st)
{
	struct stack *cur = NULL;
	struct stack *prev = NULL;
	int data = 0;

	if (*st == NULL)
	{
		printf("\nThe stack is empty, nothing can be popped\n");
	}
	
	else
	{
		cur = *st;

		while (cur->next != NULL)
		{
			prev = cur;
			cur = cur->next;
		}

		data = cur->data;
		prev->next = NULL;
		free(cur);
	}

	return data;
}

static int peek(struct stack **st)
{
	struct stack *temp = NULL;
	int data = 0;

	if (*st == NULL)
	{
		printf("\nThe stack is empty, nothing can be shown\n");
	}

	else
	{
		temp = *st;

		while (temp->next != NULL)
		{
			temp =temp->next;
		}
		
		data = temp->data;
	}

	return data;
}

static void display(struct stack *st)
{
	struct stack *temp = st;

	if (st == NULL)
	{
		printf("\nThe stack is empty, nothing is there to be displayed\n");
	}

	else
	{
		while (temp != NULL)
		{
			printf("\n%d\n", temp->data);
			temp = temp->next;
		}
	}
}

int main()
{
	int choice = 0;
	struct stack *st = NULL;

	while (1)
	{
		printf("\nEnter 0 to exit\n");
		printf("\nEnter 1 to push an element into the stack\n");
		printf("\nEnter 2 to pop an element into the stack\n");
		printf("\nEnter 3 to get the top element into the stack\n");
		printf("\nEnter 4 to display the stack\n");

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

				printf("\nEnter the data that needs to be pushed\n");
				scanf("%d", &data);
				printf("\nThe data that needs to be entered is: %d\n", data);
				push(&st, data);

				break;
			}

			case 2:
			{
				int data = 0;

				data = pop(&st);
				printf("\nThe data popped is: %d\n", data);

				break;
			}

			case 3:
			{
				int data = 0;

				data = peek(&st);
				printf("\nThe element at the top is: %d\n", data);

				break;
			}

			case 4:
			{
				display(st);
				break;
			}
		}
	}
}
