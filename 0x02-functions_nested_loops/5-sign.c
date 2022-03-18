#include "main.h"
/**
* print_sign - Entry point
* @n: number
* Return: 1 and prints + if n > zero, 0 andf prints 0 if n is zero,
* return -1 and rints - if n is < zero
*/
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('0');
return (0);
}
return (n);
}
