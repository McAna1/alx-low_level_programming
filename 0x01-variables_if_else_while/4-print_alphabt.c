#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry block
 * Description: lowercase alphabets without q and e
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);

}
