#include <stddef.h>
#include "main.h"
/**
*binary_to_uint - function that converts a binary to an unsigned int
*@b:pointe3r to the binary char
*Return:the converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
		for (i = 0; b[i] != '\0'; i++)
		{
			n <<= 1;
			if (b[i] == '1')
				n += 1;
		}
	return (n);
}
