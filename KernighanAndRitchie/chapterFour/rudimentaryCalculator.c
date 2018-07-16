#include <stdio.h>
#define MAXLINELENGTH 1000

int getLine(char[], int);
double asciiToFloat(char[]);
int isDigit(double);

int main()
{
	double sum = 0.0;
	char line[MAXLINELENGTH];

	while (getLine(line, MAXLINELENGTH) > 0) {
		sum += asciiToFloat(line);
	}//end of while loop

	printf("\nThe sum of all the numbers entered is: %f\n", sum);	

	return 0;
}//end of main function

int getLine(char line[], int limit) {
	int index = 0;
	int c;

	while ((((c = getchar()) != EOF) && c != '\n') && (index <= limit)) {
		line[index] = c;
		++index;
	}//end of while loop

	if (c == '\n') {
		line[index] = c;
		++index;
	}//end of if condition

	line[index] = '\0';
	
	return index;
}//end of getLine() function

double asciiToFloat(char line[]) {
	double result = 0.0;
	double power = 1.0;
	int index = 0;
	
	while (isDigit(line[index])) {
		result = (result * 10.0) + (line[index] - '0');
		++index;
	}//end of while loop

	if (line[index] == '.') {
		++index;
	}//end of if condition

	while (isDigit(line[index])) {
		result = (result * 10.0) + (line[index] - '0');
		++index;
		power = (power * 10.0);
	}//end of while loop

	result = (result / power);
}//end of asciiToFloat() function

int isDigit(double value) {
	value = value - '0';

	if ((value <= 9.0) && (value >= 0.0)) {
		return 1;
	}//end of if condition

	else {
		return 0;
	}//end of else condition
}//end of isDigit() function
