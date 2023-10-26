#include "main.h"
/**
*clear_bit - set value ti 0 at a given idx
*@n:pointer to ulint
*@index:uintindex to be cleared
*Return:1 if succesful || -1 if failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
