#include "main.h"
/**
 * get_bit - return of a bit at a given idx
 *@n:ulint t get the number from
 *@index:unint addy of the bit to get
 *Return: the value ofbit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
