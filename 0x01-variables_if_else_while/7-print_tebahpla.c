#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse
 * @void: Null value
 *
 * Return: 0
 */
int main(void)
{
	char num;

	for (num = 'z'; num >= 'a'; num--)
		putchar(num);
	putchar('\n');
	return (0);
}
