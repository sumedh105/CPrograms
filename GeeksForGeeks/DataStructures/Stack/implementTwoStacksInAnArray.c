#include <stdio.h>
#define MAXSIZE 100

int arr[MAXSIZE];
int top1 = -1;
int top2 = MAXSIZE;

int main()
{
	int stackNumber = 0;
	int choice = 0;

	while (1)
	{
		printf("\nEnter 0 to exit\n");
		printf("\nEnter 1 to push an element in the stack\n");
		printf("\nEnter 2 to pop an element from the stack\n");
		printf("\nEnter 3 to peek/get the top element from the stack\n");
		printf("\nEnter 4 to display the stack\n");

		printf("\nEnter choice\n");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 0:
			{
				exit(1);		
			}

			case 1:
			{
				push();
				break;
			}

			case 2:
			{
				pop();
				break;
			}

			case 3:
			{
				peek();
				break;
			}

			case 4:
			{
				display();
				break;
			}
		}
	}



	return 0;
}
