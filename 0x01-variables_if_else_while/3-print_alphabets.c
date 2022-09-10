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
char caps = 'A';
while (letter <= 'z')
{
putchar(letter)
letter++;
};
while (caps <= 'Z')
{
putchar(caps);
caps++;
};
putchar('\n');
return (0);
}
