#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 * @void: Null value
 *
 * Return: 0
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; z++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');

				if (x == 7 && y == 8 && z == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
