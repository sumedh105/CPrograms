#include <stdio.h>
#include <stdlib.h>
#define MAXNUM 10

struct queue
{
	int head;
	int tail;
	int *arr;
};

struct queue *q1, *q2, *temp;

static void create_queue()
{
	q1 = (struct queue *)calloc(1, sizeof(struct queue));
	q1->head = 0;
	q1->tail = -1;
	q1->arr = (int *)calloc(MAXNUM, sizeof(int));

	q2 = (struct queue *)calloc(1, sizeof(struct queue));
	q2->head = 0;
	q2->tail = -1;
	q2->arr = (int *)calloc(MAXNUM, sizeof(int));
}

static int is_q1_full()
{
	if (q1->tail == (MAXNUM - 1))
		return 1;
	else
		return 0;
}

static int is_q2_full()
{
	if (q2->tail == (MAXNUM - 1))
		return 1;
	else
		return 0;
}

static int is_q1_empty()
{
	if (q1->head == -1)
		return 1;
	else
		return 0;
}

static int is_q2_empty()
{
	if (q2->head == -1)
		return 1;
	else
		return 0;
}

static void push_one(int data)
{
	if (is_q1_full())
	{
		printf("\nCannot push data in the queue\n");
	}
	else
	{
		q1->arr[++(q1->tail)] = data;
	}
}

static void push_two(int data)
{
	if (is_q2_full())
	{
		printf("\nCannot push data in the queue\n");
	}
	else
	{
		q2->arr[++(q2->tail)] = data;
	}
}

static int pop_two()
{
	int data = 0;

	if (is_q2_empty())
	{
		printf("\nCannot pop anything from the stack\n");
	}
	else
	{
		data = q2->arr[(q2->head)++];
	}

	return data;
}

static void push(int data)
{
	push_one(data);
	printf("\n__LINE__: %d\n", __LINE__);

	if (!is_q2_empty())
	{
		while (q2->head <= q2->tail)
		{
			push_one(pop_two());
		}
		printf("\n__LINE__: %d\n", __LINE__);
		q2->head = 0;
		q2->tail = -1;
	}

	temp = q1;
	q1 = q2;
	q2 = temp;
}

static int pop()
{
	int data = 0;
	data = pop_two();
	return data;
}

static void display()
{
	int index = 0;

	for (index = q2->head; index <= q2->tail; ++index)
	{
		printf("\n%d\n", q2->arr[index]);
	}
}

int main()
{
	int choice = 0;
	int data = 0;

	create_queue();

	while (1)
	{
		printf("\nEnter 0 to exit\n");
		printf("\nEnter 1 to push the data\n");
		printf("\nEnter 2 to pop the data\n");
		printf("\nEnter 3 to display\n");
		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 0:
				exit(1);
			case 1:
				printf("\nEnter the data that needs to be pushed\n");
				scanf("%d", &data);
				push(data);
				break;
			case 2:
				data = pop();
				printf("\nThe popped data is: %d\n", data);
				break;
			case 3:
				display();
				break;
			default:
				break;
		}
	}
}
