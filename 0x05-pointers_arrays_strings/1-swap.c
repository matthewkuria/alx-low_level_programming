#include "main.h"
/**
 * swap_int - A function that swaps two integer numbers
 * @a: Integer one
 * @b: Integer two
 */
void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
