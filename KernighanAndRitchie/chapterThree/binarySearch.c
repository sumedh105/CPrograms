#include <stdio.h>
#define MAXNUMS 1000

int main()
{
	int n = 0;
	int index = 0;
	int arr[MAXNUMS];
	int low = 0;
	int high = 0;
	int mid = 0;
	int num = 0;

	printf("\nEnter the value n\n");
	scanf("%d", &n);
	printf("\nThe value entered is: %d\n", n);
	
	printf("\nEnter the numbers in an array\n");	
	for (index = 0; index < n; ++index) {
		arr[index] = index;
	}//end of for loop

	printf("\nThe array entered is: \n");
	for (index = 0; index < n; ++index) {
		printf("\narr[index]: %d\n", arr[index]);
	}//end of for loop

	printf("\nEnter the number that needs to be searched\n");
	scanf("%d", &num);

	low = 0;
	high = n - 1;
	
	while (low <= high) {
		mid = (low + high) / 2;

		if (num < arr[mid]) {
			high = mid - 1;
		}//end of if condition

		else if (num > arr[mid]) {
			low = mid + 1;
		}//end of else if condition

		else {
			printf("\nThe number is found at position: %d\n", mid);
			break;
		}//end of else condition	
	}//end of while loop

	if (low > high) {
		printf("\nThe entered number is not found in the array\n");
	}//end of if condition


	return 0;
}//end of main function
