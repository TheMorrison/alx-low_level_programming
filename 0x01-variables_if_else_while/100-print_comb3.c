#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits
 * @void: Null value
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;
	int y;
	int count = 0;

	while (x <= 8)
	{
		y = x + 1;
		while (y <= 9)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (count != 44)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
			count++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
