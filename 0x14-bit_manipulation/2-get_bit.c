#include "main.h"

/**
 *get_bit - create a function that returns the value of a bit at a given index
 *@n: long integer
 *@index: starting from "0" of the bit you want to get
 *Return: value of bit at index or "-1" if an error happens
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
