#include "main.h"
/**
*main - Entry point
*
*print_alphabet – function to print abc
*
*Return: Always 0 (Success)
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
