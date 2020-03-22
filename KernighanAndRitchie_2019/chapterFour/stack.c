#include <stdio.h>
#include <stdlib.h>
#define MAXOP 100
#define NUMBER '0' 
#define MAXVAL 100
#define BUFSIZE 100

int getop(char []);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);
int isdigit(int);

double val[MAXVAL];
int sp = 0;
char buf[BUFSIZE];
int bufp = 0;

int main()
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF)
	{
		switch(type)
		{
			case NUMBER:
				push(atof(s));
				break;

			case '+':
				push(pop() + pop());
				break;

			case '*':
				push(pop() * pop());
				break;

			case '-':
				op2 = pop();
				push(pop() - op2);
				break;

			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("\nerror: zero divisor\n");
				break;

			case '\n':
				printf("\n%f\n", pop());
				break;

			default:
				printf("\nereror: unknown command %s\n", s);
				break;
		}
	}

	return 0;
}

void push(double num)
{
	if (sp < MAXVAL)
	{
		val[sp++] = num;
	}
	else
	{
		printf("\nerror: stack is full, cannot push any element\n");
	}

}

double pop(void)
{
	double result = 0.0;

	if (sp > 0)
	{
		result = val[--sp];
	}
	else
	{
		printf("\nStack is empty, cannot pop\n");
	}

	return result;
}

int getop(char s[])
{
	int i, c;

	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;

	i = 0;
	if ((c >= '0') && (c <= '9'))
	{
		while ((c = getch() >= '0') && c <= '9')
		{
			s[++i] = c;
		}
	}

	if (c == '.')
	{
		while ((c = getch() >= '0') && c <= '9')
		{
			s[++i] = c;
		}
	}
	s[i] = '\0';

	if (c != EOF)
		ungetch(c);

	return NUMBER;
}

int isdigit(int num)
{
	if ((num >= '0') && (num <= '9'))
	{
		return num;
	}
	else
	{
		return 0;
	}
}

int getch(void)
{	
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("\nungetch: too many characters\n");
	else
		buf[bufp++] = c;
}
