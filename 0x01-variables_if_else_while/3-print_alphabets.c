#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: 'Prints lowercase and uppercase alphabets'
 * Return: Always 0
 */
int main(void)
{
	int x = 97;
	int y = 65;

	while (x <= 122)
	{
		putchar(x);
		++x;
	}
	while (y <= 90)
	{
		putchar(y);
		++y;
	}
	putchar('\n');
	return (0);
}
