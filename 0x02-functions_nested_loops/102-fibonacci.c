#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int a = 1, b = 2;
printf("%d, %d", a, b);
for (int i = 1; i < 50; i++)
{
int next = a + b;
printf(", %d", next);
a = b;
b = next;
}
printf("\n");
return (0);
}
