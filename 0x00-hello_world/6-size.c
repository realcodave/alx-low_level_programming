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
char a;
int b;
long int c;
long long d;
float e;
printf("Size of a char: %c byte(s)\n",sizeof(a));
printf("Size of an int: %d byte(s)\n",sizeof(b));
printf("Size of a long int: %d byte(s)\n",sizeof(c));
printf("Size of a long long: %L byte(s)\n",sizeof(d));
printf("Size of a float: %d byte(s)\n",sizeof(e));
return (0);
}
