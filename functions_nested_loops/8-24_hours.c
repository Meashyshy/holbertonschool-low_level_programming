#include "main.h"
/**
 * jack_bauer - description
 *
 * Return: Nothing
 */
	void jack_bauer(void)
{
	int h = 0, m = 0;

for (h < 24; h++)
{
	while (m < 60)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
		m++;
	}
}
}
