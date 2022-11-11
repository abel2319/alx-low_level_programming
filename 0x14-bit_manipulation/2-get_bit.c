#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: number to convert
 * @index: the index
 *
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
