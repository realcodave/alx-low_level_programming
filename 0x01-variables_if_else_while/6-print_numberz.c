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
int num = 0;
while (num <= 9)
{
putchar('%d', num);
num++;
}
putchar('\n');
return (0);
}
