#include "main.h"

/**
 * swap_int - swap numbers function
 * @a: pointer1
 * @b: pointer2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
