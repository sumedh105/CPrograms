#include <stdio.h>
#include <stdlib.h>
#define MAXSTACKCHARS 1000
#define MAXCHARLENGTH 1000
#define NUMBER 1

int stackPosition;
double stack[MAXSTACKCHARS];

void push(double);
double pop();
int getOp(char line[]); 
double asciiToFloat(char line[]);
int isDigit(char c);

int main()
{
	int c;
	char line[MAXCHARLENGTH];
	double value = 0.0;
	double result = 0.0;
	int index = 0;
	double temp = 0.0;
	int type;
	int pos = 0;
	int swapValue = 0;

	while ((type = getOp(line)) != EOF) {
		printf("\nThe line obtained is: %s\n", line);

		switch (type) {
		
			case NUMBER:
				printf("\nI am in the NUMBER case\n");
				value = asciiToFloat(line);
				printf("\nThe value obtained is: %f\n", value);
				push(value);
				break;

			case '+':
				printf("\nI am in plus case\n");
				push(pop() + pop());
				break;

			case '*':
				printf("\nI am in star case\n");
				push(pop() * pop());
				break;

			case '-':
				printf("\nI am in minus case\n");
				temp = pop();
				printf("\ntemp is: %f\n", temp);
				push(pop() - temp);
				break;

			case '/':
				temp = pop();
				if (temp != 0) {
					push(pop() / temp);
				}//end of if condition
				else {
					printf("\nThe number cannot be divided\n");
					exit(0);
				}//end of else condition
				break;

			case '%':
				temp = pop();
				if (temp != 0) {
					push(pop() / temp);
				}//end of if condition
				else {
					printf("\nThe number cannot be divided\n");
					exit(0);
				}//end of else condition
				break;
		
			case '<':
				printf("\nThis is a command to print the top most element of the stack\n");
				pos = stackPosition - 1;
				printf("\nThe pos is: %d\n", pos);
				printf("\nThe top most element of the stack is: %f\n", stack[pos]);

				swapValue = stack[pos];
				stack[pos] = stack[pos - 1];
				stack[pos - 1] = swapValue;
				break;

			case '>':
				printf("\nThis is a command to clear the stack;\n");
				--stackPosition;

				while (stackPosition >= 0) {
					stack[stackPosition] = 0;
					--stackPosition;
				}//end of while loop
				printf("\nThe stack value is stack[%d]: %f\n", ++stackPosition, stack[stackPosition]);
				break;

			default:
				printf("\nI am in default case\n");
				break;

		}//end of switch condition	
	}//end of while loop

	printf("\nThe result is: %f\n", pop());

	return 0;
}//end of main function

int getOp(char line[]) {
	int c;
	int index = 0;
	int flag = 0;

	c = getchar();

	if (!isDigit(c)) {
		line[index] = c;
		++index;

		c = getchar();
		if (isDigit(c)) {
			flag = 1;
			while (isDigit(c)) {
				line[index] = c;
				++index;
				c = getchar();
			}//end of while loop
		}//end of if condition

		if (c == '.') {
			flag = 1;
			line[index] = c;
			++index;
			c = getchar();

			while (isDigit(c)) {
				line[index] = c;
				++index;
				c = getchar();
			}//end of while loop
		}//end of if condition

		line[index] = '\0';
		
		if (flag == 1) {
			return NUMBER;
		}//end of if condition

		else {
			return line[index - 1];
		}//end of else condition
	}//end of if condition

	if (isDigit(c)) {
		while (isDigit(c)) {
			line[index] = c;
			++index;
			c = getchar();
		}//end of while loop
	}//end of if condition

	if (c == '.') {
		line[index] = c;
		++index;
		c = getchar();

		while (isDigit(c)) {
			line[index] = c;
			++index;
			c = getchar();
		}//end of while loop
	}//end of if condition

	line[index] = '\0';	

	return NUMBER;
}//end of getline() function

void push(double value) {

	if (stackPosition > MAXSTACKCHARS) {
		printf("\nStack is full, cannot add elements to the stack\n");
		exit(0);
	}//end of if condition

	else {
		stack[stackPosition] = value;
		printf("\nI am in push() function and stack[%d]: %f\t and value is: %f\n", stackPosition, stack[stackPosition], value);
		++stackPosition;
	}//end of else condition
	printf("\nstackPosition in push function is: %d\n", stackPosition);
}//end of push function

double pop() {
	double value = 0.0;

	printf("\nstackPosition in pop function is: %d\n", stackPosition);
	if (stackPosition < 0) {
		printf("\nStack is empty, cannot pop more from the stack\n");
		exit(0);
	}//end of 

	else {
		--stackPosition;
		value = stack[stackPosition];
	}//end of else condition
	printf("\nI am in pop() function and stack[%d]: %f\n", stackPosition, stack[stackPosition]);

	return value;
}//end of pop function

double asciiToFloat(char line[]) {
	int index = 0;
	double result = 0.0;
	int power = 1.0;
	int sign;

	sign = (line[index] == '-') ? -1 : 1;	
	printf("\nThe sign is %d\n", sign);

	if (sign == -1) {
		printf("\nI am in if condition and sign is negative\n");
		++index;
	}//end of if condition

	while (isDigit(line[index])) {
		result = (result * 10.0) + (line[index] - '0');	
		++index;
	}//end of while loop

	if (line[index] == '.') {
		++index;
		while (isDigit(line[index])) {
			result = (result * 10.0) + (line[index] - '0');
			power = (power * 10.0);
			++index;	
		}//end of while loop	
	}//end of if condition

	result = (sign) * (result / power);

	return result;
}//end of asciiToFloat() function

int isDigit(char c) {

	if (c >= '0' && c <= '9') {
		return 1;
	}//end of if condition

	else {
		return 0;
	}//end of else condition
}//end of isDigit() function

