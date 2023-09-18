#include "main.h"
/**
 * swap_int - function that swaps the val of two int
 * @a : first operant
 * @b: second operant
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a  = *b;
	*b = t;
}
