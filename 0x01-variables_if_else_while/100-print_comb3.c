#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int num2;

	num = '0';
	while (num <= '9')
{
	num2 = num + 1;
	while (num2 <= '9')
{
	putchar(num);
	putchar(num2);
	if (num == '8' && num2 == '9')
	{
	num2++;
	}
	else
	{
		putchar(',');
		putchar(' ');
		num2++;
	}
}
num++;
}
putchar('\n');
return (0);
}
