#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int s, q;

for (s = 0; s < 100; s++)
{
for (q = 0; q < 100; q++)
{
if (s < q)
{
putchar((s / 10) + 48);
putchar((s % 10) + 48);
putchar(' ');
putchar((q / 10) + 48);
putchar((q % 10) + 48);
if (s != 98 || q != 99)
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
