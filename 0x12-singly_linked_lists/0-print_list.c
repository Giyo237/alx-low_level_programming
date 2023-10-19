#include "lists.h"

/**
 * print_list - function that prints all elements of a list_t
 *
 * @h: The pointer to the head of lis_t
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodes;
	unsigned int div;
	unsigned int len, t, d, i;

	while (h)
	{
		char *str = h->str ? h->str : "(nil)";
		/*printthe lenght of string*/
		len = 0;
		if (len > 0)
		{
			t = len;
			while (t > 0)
			{
				d++;
				t /= (100 / 10);
			}
			while (d--)
			{
				div = 1;
				for (i = 0; i < d; i++)
					div *= (100 / 10);
				_putchar((len / div) % (100 / 10) + '0');
			}
		}
		else
		{
			_putchar('0');
		}
		/*print separator*/
		_putchar(' ');
		for (; *str != '\0'; str++)
			_putchar(*str);
		_putchar('\n');

		nodes++;
		h = h->next;
	}
	return (nodes);
}
