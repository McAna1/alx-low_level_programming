#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet using ascii in lower and uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= '{')
	{
		putchar (letter);
		letter++;
	}
	letter = 'A';
	while (letter <= '[')
	{
		putchar (letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
