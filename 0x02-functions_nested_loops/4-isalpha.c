#include "main.h"
/**
* _isalpha -Entry point
* @c: Character in ASCII
* Return: Always 1 when c is uppercase, else 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
