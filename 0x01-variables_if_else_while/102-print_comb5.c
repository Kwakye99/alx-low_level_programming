#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int a, b, c, d;
for (a = 0; a <= 99; a++)
{
for (b = 0; b <= 99; b++)
{
for (c = 0; c <= 99; c++)
{
for (d = 0; d <= 99; d++)
{
if (((d + c) > (b + a) && c >= a) || a < c)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a + b + c + d == 395 && a == 99)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
