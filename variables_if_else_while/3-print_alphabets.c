#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char a = 'x';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	a= 'A';

	while (a <= 'Z')
	{
	
	putchar('\n');
	a++;
	}
	
	putchar('\n');
	return (0);
}
