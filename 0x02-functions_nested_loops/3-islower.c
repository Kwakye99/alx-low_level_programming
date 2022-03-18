#include "main.h"
/**
* _islower - Entry point
* @c: Character in ASCII
* Return: Always 0 if c is uppercasecase, else 1 (Success)
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
