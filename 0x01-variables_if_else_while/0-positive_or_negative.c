#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - A program that will assign a random number to n
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
