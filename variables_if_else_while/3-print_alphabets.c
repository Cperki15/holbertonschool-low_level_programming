#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char x = 'x';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	x= 'X';

	while (x <= 'Z')
	{
	
	putchar('\n');
	x++;
	}
	
	putchar('\n');
	return (0);
}
