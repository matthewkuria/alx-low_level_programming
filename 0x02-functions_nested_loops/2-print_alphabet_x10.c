#include "main.h"
/**
 * print_alphabet_x10 - 'Prints 10 times the alpahbets in lower case'
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
