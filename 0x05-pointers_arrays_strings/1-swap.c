#include "main.h"
/**
 * swap - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */

void swap(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
