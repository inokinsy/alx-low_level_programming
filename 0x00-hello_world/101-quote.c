#include <stdio.h>
#include <unistd.h>
/**
 * main - prints a standard error
 * Return: Always 1 (Success)
*/
int main(void)
{
	char var[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, var, sizeof(var) - 1);
	return (1);
}
