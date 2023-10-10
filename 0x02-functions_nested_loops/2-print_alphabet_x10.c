#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char n = 'a';
while (n <= 'z')
{
_putchar(n);
n++;
}
_putchar('\n');
i++;
}
return (0);
}
