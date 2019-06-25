#include "holberton.h"

/**
 * jack_bauer - time
 *
 * Return: absoluted.
 */
void jack_bauer(void)
{
	int m1, m2, m3, m4;

	for (m1 = 0; m1 <= 2; m1++)
	{
		for (m2 = 0; m2 <= 9; m2++)
		{
			for (m3 = 0; m3 < 6; m3++)
			{
				for (m4 = 0; m4 <= 9; m4++)
				{
					if (m1 <= 1)
					{
						_putchar(m1 + '0');
						_putchar(m2 + '0');
						_putchar(58);
						_putchar(m3 + '0');
						_putchar(m4 + '0');
						_putchar('\n');
					}
					if ((m1 == 2) && (m2 < 4))
					{
						_putchar(m1 + '0');
						_putchar(m2 + '0');
						_putchar(58);
						_putchar(m3 + '0');
						_putchar(m4 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
