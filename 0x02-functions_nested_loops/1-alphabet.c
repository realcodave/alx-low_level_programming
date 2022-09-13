#include "main.h"
/**
*main - Entry point
*
*print_alphabet : 'the program's description'
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
