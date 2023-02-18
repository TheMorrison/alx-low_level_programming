#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers
 * @void: Null value
 *
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int y;
	int count = 0;

	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			putchar((x/ 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (count != 4949)
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
