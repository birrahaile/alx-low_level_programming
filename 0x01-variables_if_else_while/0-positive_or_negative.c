#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -> assign a randome value to n and compare the value wheather it is a positive or negative
 * 
 * return (0);
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		/* code */
		printf("The number %d is positive\n", n);
	}
	else if (n == 0)
	{
		/* code */
		printf("The number %d is zero\n", n);
	}
	else
	{
		/* code */
		printf("The number %d is negative\n", n);
	}
	return (0);
	}
	
	

	
