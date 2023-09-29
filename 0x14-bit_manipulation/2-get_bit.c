#include"main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int number from which to get the bit.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at index, or -1 if an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1UL << index;
return ((n & mask) ? 1 : 0);
}
