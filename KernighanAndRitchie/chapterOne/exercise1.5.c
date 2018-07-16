#include <stdio.h>
#define MAX 300

int main()
{
	float fahr = 0, cels = 0;

	printf("\nFahrenheit to celsius conversion table:\n");
	for (fahr = MAX; fahr >=0; fahr-=20) {
		printf("\nfahr: %f\tcels: %f\n", fahr, cels);
		cels = (5 * (fahr - 32)) / 9;	
	}//end of for loop

}//end of main function
