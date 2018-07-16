#include <stdio.h>
#define MAX 300

int main()
{
	float fahr = 0, cels = 0;
	int step = 0;
	
	printf("\nFahrenheit to Celsius conversion table:\n");	
	while (step <= MAX) {
		cels = (5 * (fahr - 32)) / 9;
		printf("\nfahr: %3.2f\tcels: %6.1f\n", fahr, cels);
		step += 20;
		fahr = step;
	}//end of while loop
}//end of main function
