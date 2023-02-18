#include <stdio.h>
/**
 * main - Prints alphabet in lowercase and then in uppercase
 * @void: Null value
 *
 * Return: 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);
	{
	putchar('\n');
	}

	return (0);
}
