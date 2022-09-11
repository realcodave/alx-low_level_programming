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
if (num == 9)
{
putchar(num + ' ');
num++;
}
else
{
putchar(num + '0');
putchar(',');
putchar(' ');
num++;
}
}
return(0);
}
