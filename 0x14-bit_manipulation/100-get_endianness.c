#include "main.h"
/**
*get_endianness -  function that checks the endianness.
*Return:0 if big wndian |1 if little endian
*/
int get_endianness(void)
{
	unsigned int n = 1;
	char *ptr;

	ptr = (char *)&n;
	return ((int)ptr[0]);
}
