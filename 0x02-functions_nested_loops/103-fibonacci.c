#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
int sum = 0;
int a = 1, b = 2;
while (a < 4000000)
{
if (a % 2 == 0)
{
sum += a;
}
a = b;
b = a + b;
}
printf("%d\n", sum);
return (0);
}
