// https://www.codewars.com/kata/526571aae218b8ee490006f4/train/c
// The binary representation of 1234 is 10011010010, so the function should return 5 in this case
#include <stddef.h>

size_t countBits(unsigned value)
{
	size_t count = 0;
	while (value) {
		count += value & 1;
		value >>= 1;
	}
	return count;
}