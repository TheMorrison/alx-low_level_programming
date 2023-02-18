#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 * @void: Null value
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;
	int y, z;
	int count = 0;

	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (count != 119)
				{
					putchar(',')
						putchar(' ')
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
