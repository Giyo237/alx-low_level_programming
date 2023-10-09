#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _is_digit - a function that checks for digits
 * @c: checker
 * Return: if c is digit
 */
int _is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
* validate - validation function
* @num1: argument counter
* @num2: argument vector
* Return: 0
*/
int validate(char *num1, char *num2)
{
	int i, j = 0;

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!_is_digit(num1[i]))
		{
			exit(98);
			return (98);
		}
	}
	for (j = 0; num2[j] != '\0'; j++)
	{
		if (!_is_digit(num2[j]))
		{
			exit(98)
			return (98);
		}
	}
	return (0);
}
/**
 * multi - this function multiplies num1 and num2 if they are valid
 * @num1: first operant
 * @num2: second operant
 * Return: 0
 */
int multi(char *num1, char *num2)
{
	int i, j, l1, l2, carry, sum;
	int *result;

	l1 = strlen(num1);
	l2 = strlen(num2);
	result = malloc(sizeof(int) * (l1 + l2));
	for (i = 0; i < l1 + l2; i++)
	{
		result[i] = 0;
	}
	for (i = l1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = l2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i + j + 1] += carry;
	}
	i = 0;
	while (i < l1 + l2 - 1 && result[i] == 0)
	{
		i++;
	}
	for (; i < l1 + l2; i++)
	{
		printf("%d\n", result[i]);
	}
	printf("\n");
	free(result);
	return (0);
}
/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (validate(num1, num2) != 0)
	{
		printf("Error\n");
		exit(98);
		return (98);
	}
	multi(num1, num2);
	printf("\n");
	exit(98)
	return (98);
}
