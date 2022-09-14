#include "main.h"
/**
* print_alphabet_x10 - function to print abc 10 times
*
* Return: 0
*/
void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i <= 9; i++)
{
for (letter = 0; letter <= 'z'; letter++)
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}
