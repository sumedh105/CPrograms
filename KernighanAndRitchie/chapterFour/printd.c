#include <stdio.h>

void printd(int);

int main()
{
	int num = 0;

	printf("\nEnter the number that needs to be printed as a character string\n");
	scanf("%d", &num);
	printf("\nThe number entered is: %d\n", num);

	printd(num);

	return 0;
}//end of main function

void printd(int num) {
	if (num / 10) {
		printd(num/10);
	}//end of if condition

	putchar(num % 10 + '0');
}//end of printd() function
