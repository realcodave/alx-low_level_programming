#include <stdio.h>

/**
*main - Entry point
*
*Description: 'the program's description'
*
*Return: Always 0 (Success)
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
};
putchar('\n');
return (0);
}
