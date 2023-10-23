#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
int j, i;
if (n < 0 || n > 15)
{
return;
}
for (; i <= n; i++)
{
for (; j <= n; j++)
{
printf("%d", i * j);
if (j < n)
{
printf(", ");
}
}
printf("\n");
}
}
