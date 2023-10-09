#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int l, k;

for (l = 48; l <= 56; l++)
{
for (k = 49; k <= 57; k++)
{
if (k > l)
{
putchar(l);
putchar(k);
if (l != 56 || k != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
