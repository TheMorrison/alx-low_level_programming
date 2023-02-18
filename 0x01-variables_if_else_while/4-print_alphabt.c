#include <stdio.h>
/**
 * main - Prints the alphabets in lowercase
 * except q and e
 * @void: Null value
 *
 * Return: 0
 */
int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		if (m == 'q' || m == 'e')
			continue;
		putchar(m);
	}
	putchar('\n');
	return (0);
}
