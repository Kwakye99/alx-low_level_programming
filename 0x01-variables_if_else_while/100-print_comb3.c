#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int g, p;
for  (g = '0'; g <= '9'; g++)
{
for (p = '0'; p <= '9'; p++)
{
if (g < p)
{
putchar(g);
putchar(p);

if (g != '8' || (g == '8' && p != '9'))
{
putchar(',');
putchar(' ');
}
}
}	
}
putchar('\n');
return (0);
}
