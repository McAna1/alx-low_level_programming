#include <stdio.h>

/**
 * main - create 2 pairs of numbers possible
 * Return: Always 0
 */
int main(void)
{
	int z, v;

	for (z = 0; z <= 99; z++)
	{
		for (v = z; v <= 99; v++)
		{
			if (v != z)
			{

				putchar(z / 10 + 48);
				putchar(z % 10 + 48);
				putchar(' ');
				putchar(v / 10 + 48);
				putchar(v % 10 + 48);

				if (z * 100 + v != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	putchar('\n');
	return (0);
}
