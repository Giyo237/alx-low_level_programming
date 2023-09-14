#include "main.h"
/**
 * _isdigit - function that checks for digits
 * @c: the operant used to check
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
