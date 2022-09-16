#include "main.h"
/**
* _isupper - checks for uppercase.
* @c: character to check.
* Return: 1 if c is uppercase, otherwise return 0
*/
int _isupper(int letter)
{
if (letter >= 'A' && letter <= 'Z')
return (1);
else
return (0);
}
