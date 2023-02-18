#include <stdio.h>
/**
 * main - Prints prints the alphabet in lowercase
 * @void: Null value
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
