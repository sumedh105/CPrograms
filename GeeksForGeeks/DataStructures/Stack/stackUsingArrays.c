#include <stdio.h>

int main()
{
	int choice = 0;


	while (1)
	{
		printf("\nPress 1 to push the data to the stack\n");
		printf("\nPress 2 to pop the data from the stack\n");
		printf("\nPress 3 to peek or get the top from the stack\n");
		printf("\nPress 4 to display the stack\n");

		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				int data = 0;
				data = pop();

				printf("\nThe popped data is: %d\n", data);

				break;
			}
			case 3:
			{	
				int data = 0;
				data = peek();

				printf("\nThe data at top is: %d\n", data);

				break;
			}
			case 4:
			{
				display();
				break;
			}
			default:
			{
				break;
			}
		}
	}
}
