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
	
	int UpperX;
	int i;
	char num = '#';

	UpperX[sizeof(unsigned int) * 2]
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
