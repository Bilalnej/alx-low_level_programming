#include "main.h"
/**
* _isalpha - Short description, single line
* @c: contains value to be compared
* Return: Always 0.
*/
int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
{
return (1);
}
else
return (0);
}
