include "main.h"

/**
 * postitive_or_negative() - check the code
 *
 * Return: Always 0.
 */

void postitive_or_negative(void)
{
int i;
srand(time(0));
i = rand() - RAND_MAX / 2;
if (i == 0)
{
printf("%d is zero\n", i);
}
