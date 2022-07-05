#include <unistd.h>
#include "main.h"

/**
 * jack+bauer - Check the code
 * Description: rfunction that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59.
 * Return: Nothing.
 */
void jack_bauer(void)
{
    int hours, minutes;

    for (hours = 0; hours < 24; hours++)
    {
        /* code */
        for ( minutes = 0; minutes < 60; minutes++)
        {
            /* code */
            _putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
        }

    }
}
