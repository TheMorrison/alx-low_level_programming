#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * @void: Null value
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j;
	int count = 0;

	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (count != 4949)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
			count++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
