<<<<<<< HEAD
#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: number to get last digit of
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	n %= 10;
	n = (n < 0 ? -1 * n : n);
	_putchar(n + '0');
	return (n);
}
=======
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Check Holberton
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
>>>>>>> 5b8e14ff6f336880abaa0361daa6df2f5786dd20
