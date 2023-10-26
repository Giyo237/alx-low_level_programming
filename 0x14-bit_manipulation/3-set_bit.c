#include "main.h"
/**
  *set_bit - function that sets bits to 1 at a given idx
  *@n:pointer to the ulint
  *@index:index of bit to be set
  *Return:1 if succesful or -1 if failed
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1Ul << index);
	return (1);
}
