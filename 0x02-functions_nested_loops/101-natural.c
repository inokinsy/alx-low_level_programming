#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
int ii, _sum;
for (ii = 3; ii < 1024; ii++)
{
if (ii % 3 == 0 || ii % 5 == 0)
_sum += ii;
}
printf("%d\n", _sum);
return (0);
}
return (0);
}
