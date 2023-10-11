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
/* your code goes there */
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
