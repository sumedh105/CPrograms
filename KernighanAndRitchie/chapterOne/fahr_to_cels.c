#include <stdio.h>

#define MAX 300

int main()
{
	float fahr = 0, cels = 0;
	int step = 0;

	/*for (fahr = 0; fahr < MAX; fahr+=20) {
		cels = (5 * (fahr - 32)) / 9; 
		printf("\nfahr: %d\tcels: %d\n", fahr, cels);
	}//end of for loop*/

	while (step <= MAX) {
		printf("\nfahr: %f\tcels: %f\n", fahr, cels);
		cels = (5 * (fahr - 32)) / 9;
		step +=20;
		fahr = step;
	}//end of while loop	
}//end of main function
