#include <stdio.h>
#define MAX 300

int main()
{
	float fahr = 0, cels = 0;
	
	printf("\nCelsius to Fahrenheit table:\n");
	while (cels <= MAX) {
		fahr = ((9 * cels) / 5) + 32;
		printf("\ncels: %f\tfahr: %f\n", cels, fahr);	
		cels += 20;
	}//end of while loop
}//end of main function
