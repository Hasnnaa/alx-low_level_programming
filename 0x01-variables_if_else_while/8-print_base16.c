#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 1;
putchar('0');
while (n <= 15)
{
putchar(n < 10 ? '0' + n : 'a' + n - 10);
n++;
}
putchar('\n');
return (0);
}

