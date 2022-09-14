#include "main.h"
/**
* _isalpha – is it an alphabet
* @c:  argument of the function
* Return: 0
*/

int _isalpha(int c)
{
if ((c >= 'a'  && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);

}
