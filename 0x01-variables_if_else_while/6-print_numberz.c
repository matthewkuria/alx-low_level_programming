#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints  prints all single digit numbers '
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return (0);
}

