#include <stdio.h>

/**
 * main - My SE TASK 4
 *
 * Return: Always 0 (1MONTH)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if ((c != 'e') && (c != 'q'))
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
