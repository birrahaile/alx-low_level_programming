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
>>>>>>> b73d1d3ba3f6eee970311a8a1e8f8d076d459cc1
