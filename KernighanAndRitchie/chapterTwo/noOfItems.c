#include <stdio.h>

int main()
{
	int noOfItems = 0;

	printf("\nEnter the number of items\n");
	scanf("%d", &noOfItems);
	printf("\nI have %d item%s\n", noOfItems, (noOfItems == 1) ? "" : "s");

	return 0;
}//end of main function
