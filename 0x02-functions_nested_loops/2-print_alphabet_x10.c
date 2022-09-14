#include "main.h"
/**
* print_alphabet – function to print abc
*
* Return: 0
*/
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
