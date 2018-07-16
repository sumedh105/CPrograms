#include <stdio.h>

int main()
{
	int num;
	int reversenum = 0;
	int count = 31;

	printf("\nEnter the number that needs to be reversed\n");
	scanf("%d", &num);
	printf("\nThe number entered is: %d\n", num);

	while (num) {
		if (num & 01) {
			reversenum = reversenum | 1;		
		}//end of if condition

		else {
			reversenum = reversenum | 0;
		}//end of else condition

		num  = num >> 1;
		--count;
		reversenum = reversenum << 1;
	}//end of while loop

	reversenum = reversenum << count;

	printf("\nThe reversenumber is: %d\n", reversenum);

	return 0;
}//end of main fucntion
