#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints alphbets lowercase'
 * Return: Always 0
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		putchar(x);
		x = x + 1;
	}
	putchar('\n');
	return (0);
}
