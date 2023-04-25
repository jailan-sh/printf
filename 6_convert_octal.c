/**
 * print_o - takes an unsigned int & prints it as octal.
 * @valist: va_list.
 * @p: print indicator. 0 just to get value, 1 for printing the value.
 * @count: bytes counting.
 * Return: void.
 */
void print_o(va_list *valist, int p, int *count)
{
	unsigned int n = va_arg(*valist, unsigned int);

	if (p == 1)
	{
		print_octal(n, count);
	}
}

/**
 * print_octal - prints converted int to octal.
 * @n: unsigned int to be converted and printed.
 * @count: bytes counting.
 * Return: void.
 */
void print_octal(unsigned int n, int *count)
{
	int octalNum[sizeof(unsigned int) * 3];
	int i;

	i = 0;

	if (n == 0)
	{
		octalNum[i] = 0;
		i++;
	}

	while (n > 0)
	{
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}
	i--;

	while (i >= 0)
	{
		_putchar(octalNum[i--] + '0');
		*count = *count + 1;
	}
}
