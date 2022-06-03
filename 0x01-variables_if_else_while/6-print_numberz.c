#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10 beginning with 0
 * 
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}

	putchar('\n');
	return (0);
}
