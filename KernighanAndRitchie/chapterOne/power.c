#include <stdio.h>

int power (int base, int num) {

	int index = 0, temp_num = 0;

	temp_num = base;

	for (index = 0; index < (num - 1); index++) {
		temp_num = temp_num * base;
		printf("\ntemp_num: %d\n", temp_num);
	}//end of for loop

	return temp_num;	
}//end of power function

int main()
{

	int base_num = 0, num = 0, res = 0;

	printf("\nEnter the base number and the exponent number\n");
	scanf("%d %d", &base_num, &num);
	printf("\nThe numbers entered are: %d and %d\n", base_num, num);

	res = power(base_num, num);

	printf("\nThe result obtained is: %d\n", res);

	return 0;
}//end of main function
