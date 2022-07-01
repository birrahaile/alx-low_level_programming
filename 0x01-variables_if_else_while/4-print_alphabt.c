
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;
    char j,k;
    j ='q';
    k ='e';

	for (low = 'a'; low <= 'z'; low++)
    {
        if (j != 'q' && k != 'e')
            /* code */
            putchar(low);
    }

    
	return (0);
}
