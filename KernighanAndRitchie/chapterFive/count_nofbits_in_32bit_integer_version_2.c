#include <stdio.h>

int main()
{
	int num;
	int count = 0;

	printf("\nEnter the number from which the number of bits that are set needs to be calculated\n");
	scanf("%d", &num);
	printf("\nThe number entered is: %d\n", num);

	while (num) {
		num = num & (num - 1);
		++count;
	}//end of while loop

	printf("\nThe number of bits that are set are: %d\n", count);

	return 0;
}//end of main function

