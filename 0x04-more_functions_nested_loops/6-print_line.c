#include "main.h"
/**
*more_numbers - prints the range 0-14 ten times.
*Return: nothing.
*/
void print_line(int n)
{
int i = 0;
if (n > 0)
{
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
}
