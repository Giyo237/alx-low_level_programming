#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - adds two intergers aand b
* @a: integer one
* @b: inter two
* Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction op
 *
 * @a: integer one
 * @b: integer two
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that returns
 *
 * @a: The first integer
 * @b: The second int
 * Return: product 
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that returns the answer of a/b
 *
 * @a: The first integer
 * @b: The second int
 * Return: the quotent
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function that returns the modulus
 *
 * @a: The first integer
 * @b: The second int
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
