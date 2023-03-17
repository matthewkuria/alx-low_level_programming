#include <stdio.h>
/**
 * main -Entry point
 * Description: 'Prints numbers base 16'
 * Return: Always 0
 */
int main(void)
{
	int x;
	char ch;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
