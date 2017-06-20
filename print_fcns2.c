#include "holberton.h"

int pxx(va_list valist)
{
	unsigned int n;
	int k = 0, c = 0;
	char hex[10];


	n = va_arg(valist, unsigned int);
	if (n == 0)
		k += _putchar('0');
	while (n != 0)
	{
		hex[c] = n % 16;
		n /= 16;
		c++;
	}
	c--;
	while(c >= 0)
	{
		if (hex[c] >= 0 && hex[c] <= 9)
                        k += _putchar(hex[c] + '0');
                else
                {
                        k += _putchar((hex[c] % 10) + 'A');
                }
		c--;
	}
	return (k);

}
int po(va_list valist)
{
	unsigned int n;
	int k = 0, c = 0, oct[10];


	n = va_arg(valist, unsigned int);
	if (n == 0)
		k += _putchar('0');
	while (n != 0)
	{
		oct[c] = n % 8;
		n /= 8;
		c++;
	}
	c--;
	while(c >= 0)
	{
		if (oct[c] >= 0 && oct[c] < 9)
			k += _putchar(oct[c] + '0');
		c--;
	}
	return (k);

}

int pp(va_list valist)
{
	long int ptr, adr[16];
	int k = 0, c = 0;

	ptr = va_arg(valist, long int);
	if (ptr == 0)
		k += _putchar('0');
	else
	{
		k += _putchar('0');
                k += _putchar('x');
		while (ptr != 0)
		{
			adr[c] = ptr % 16;
			ptr /= 16;
			c++;
		}
		c--;
		while(c >= 0)
		{
			if (adr[c] >= 0 && adr[c] <= 9)
				k += _putchar(adr[c] + '0');
			else
			{
				k += _putchar((adr[c] % 10) + 'a');
			}
			c--;
		}
	}
	return (k);
}
