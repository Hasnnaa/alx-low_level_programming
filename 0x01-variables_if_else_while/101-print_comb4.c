#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, s, l;

for (i = 48; i < 58; i++)
{
for (s = 49; s < 58; s++)
{
for (l = 50; l < 58; l++)
{
if (l > s && s > i)
{
putchar(i);
putchar(s);
putchar(l);
if (i != 55 || s != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
