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
                        k += _putchar((hex[c] % 10) + 'a');
                }
		c--;
	}
/**	for (i = 0; i < c - i; i++)
	{
		t = hex[i];
		hex[i] = hex[c - i];
		hex[c - i] = t;
		if (hex[i] >= 0 && hex[i] <= 9)
			k += _putchar(hex[i] + '0');
		else
		{
			k += _putchar((hex[i] % 10) + 'a');
		}
	}
*/
	return (k);

}
