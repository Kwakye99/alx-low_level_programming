#include "main.h"
#include <stdio.h>
/**
* _isdigit - checks for only digit
* @c: the didit to be checked
* Return: Always 1 if c is a digit and 1 otherwise
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
