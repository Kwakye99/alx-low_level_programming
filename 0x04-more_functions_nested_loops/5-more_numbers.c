#include "main.h"
/**
* more_numbers - prints 10x numbers from 0 to 14
* Return: Always void
*/
void more_numbers(void)
{
int c, k;
for (c = 0; c < 10; c++)
{
for (k= 0; k < 15; k++)
{
if (k >= 10)
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
}
_putchar('\n');
}
}
