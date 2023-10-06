#include <stdio.h>
/**
 *main - entry point
 *Description: random number in n +ve/-ve
 *Return: 0 on success
 */
int main(void)
{
int var, n;
for (var = 48, n = 0; n < 10; var++, n++)
{
putchar(var);
if (n < 9)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
