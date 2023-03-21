/*
 * File: 3-islower.c
 * Done by: Matthew Kuria
 */
#include "main.h"
/**
 * _islower - 'Checks if a character is lower case'
 *@c: the character to check
 * Return: 1 if lowercse , 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
