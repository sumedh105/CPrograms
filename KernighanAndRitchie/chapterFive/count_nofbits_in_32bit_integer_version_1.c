#include <stdio.h>

int main()
{
	int num;
	int count = 0;

	printf("\nEnter the number from which the number of set bits needs to be counted\n");
	scanf("%d", &num);
	printf("\nThe number entered is: %d\n", num);

	while (num != 0) {
		if (num & 01) {
			++count;
		}//end of if condition

		num = num >> 1;
	}//end of while loop	

	printf("\nThe number of bits that are set are: %d\n", count);

	return 0;
}//end of main function
