#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int a = 1, b = 2, i = 1;
printf("%d, %d", a, b);
for (; i < 50; i++)
{
int ji = a + b;
printf(", %d", ji);
a = b;
b = ji;
}
printf("\n");
return (0);
}
