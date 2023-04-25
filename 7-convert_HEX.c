#include "main.h"

/**
 * print_X - an unsigned int and sees if it is uppercase hexa.
 * @valist: working va_list.
 * @p: print indicator. 0 just to get value, 1 for printing the value.
 * @count: bytes counting.
 *
 * Return: void.
 */
void print_X(va_list *valist, int p, int *count)
{
	unsigned int n = va_arg(*valist, unsigned int);

	if (p == 1)
	{
		print_upperX(n, count);
	}
}

/**
 * print_upperX - prints an unsigned int hexadecimal in uppercase.
 * @n: unsigned int to be converted and printed.
 * @count: bytes counting.
 *
 * Return: void.
 */
void print_upperX(unsigned int n, int *count)
{
	int i;
	char num = '#';
	int upperX[sizeof(unsigned int) * 2];

	i = 0;

	if (n == 0)
	{
		upperX[i] = 0;
		i++;
	}
	while (n > 0)
	{
		upperX[i] = n % 16;
		n = n / 16;
		i++;
	}
	i--;

	while (i >= 0)
	{
		num = upperX[i--];
		if (num > 9)
			num = num - 10 + 'A';
		else
			num = num + '0';

		_putchar(num);
		*count = *count + 1;
	}
}

/**
 * print_x - takes an unsigned int and sees if prints it as lowercase hexa.
 * @valist: the working va_list.
 * @p: print indicator. 0 just to get value, 1 for printing the value.
 * @count: bytes counting.
 *
 * Return: void.
 */

void print_x(va_list *valist, int p, int *count)
{
	unsigned int n = va_arg(*valist, unsigned int);

	if (p == 1)
	{
		print_lowerx(n, count);
	}
}

/**
 * print_lowerx -an unsigned int converted to hexadecimal in lowercase.
 * @n: unsigned int to be converted and printed.
 * @count: bytes counting.
 *
 * Return: void.
 */

void print_lowerx(unsigned int n, int *count)
{
	int lowerx[sizeof(unsigned int) * 2];
	int i;
	char num = '#';

	i = 0;

	if (n == 0)
	{
		lowerx[i] = 0;
		i++;
	}
	while (n > 0)
	{
		lowerx[i] = n % 16;
		n = n / 16;
		i++;
	}
	i--;

	while (i >= 0)
	{
		num = lowerx[i--];
		if (num > 9)
			num = num - 10 + 'a';
		else
			num = num + '0';

		_putchar(num);
		*count = *count + 1;
	}
}
